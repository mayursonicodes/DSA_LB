// ! MERGE SORT -->

/*
? 1. mid find
? 2. break 2 half
? 3. recursion --> 2 half sort
? 4. 2 half merge
*/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void merge(int arr[], int start, int end){
    int mid = (start + end) / 2;

    //todo Finding the length of left and right subpart
    int leftLen = mid - start + 1;
    int rightLen = end - mid; //! end - (mid-1) + 1

    //todo Creating new empty array of length --> leftLen, rightLen
    int* leftArray = new int[leftLen];
    int* rightArray = new int[rightLen];

    //todo Copying original values to empty array
    int k = start; //! can't take 0
    for(int i=0; i<leftLen; i++){
        leftArray[i] = arr[k];
        k++;
    }
    
    k = mid + 1;;
    for(int i=0; i<rightLen; i++){
        rightArray[i] = arr[k];
        k++;
    }

    //todo merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while(leftIndex < leftLen && rightIndex < rightLen){
        if(leftArray[leftIndex] > rightArray[rightIndex]){
            arr[mainArrayIndex++] = rightArray[rightIndex++];
        }
        else{
            arr[mainArrayIndex++] = leftArray[leftIndex++];
        }
    }

    //todo logic for leftover array
    while(leftIndex < leftLen){
        arr[mainArrayIndex++] = leftArray[leftIndex++];
    }

    while(rightIndex < rightLen){
        arr[mainArrayIndex++] = rightArray[rightIndex++];
    }
}

void mergeSort(int arr[], int start, int end){
    if(start >= end) return;

    int mid = (start + end) / 2;

    //! left part for recursion
    mergeSort(arr, start, mid);

    //! right part for recursion
    mergeSort(arr, mid+1, end);

    merge(arr, start, end);
}

int main(){

    int arr[] = {4,5,13,2,12,1};

    int start = 0;
    int end = sizeof(arr)/sizeof(int) - 1;

    mergeSort(arr, start, end);

    for(auto i: arr){
        cout<<i<<" ";
    }

    return 0;
}