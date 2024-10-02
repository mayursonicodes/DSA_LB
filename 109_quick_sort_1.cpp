//! QUICK SORT

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int partition(int arr[], int start, int end){
    int pivotIndex = start;
    int pivotElement = arr[start];

    //todo Finding correct position for pivot element by counting numbers smaller than it
    int count = 0;
    for(int i = (start+1); i<=end; i++){
        if(arr[i] <= pivotElement)
            count++;
    }

    //todo swaping pivot index with right index
    int rightIndex = start + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;

    //todo transfering smaller elements to left, larger elements to right of pivot element
    int i = start;
    int j = end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivotElement) i++;
        while(arr[j] > pivotElement) j--;

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i], arr[j]);
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int start, int end){
    if(start >= end) return;

    //todo return pivot index
    int part = partition(arr, start, end);

    //todo left part
    quickSort(arr, start, part-1);
    //todo right part
    quickSort(arr, part+1, end);
}

int main(){

    int arr[] = {8,1,3,4,20,50,5,1,1,1,2,2,50,30};
    int start = 0;
    int end = sizeof(arr)/sizeof(int) - 1;

    quickSort(arr, start, end);

    for(auto i: arr){
        cout<<i<<" ";
    }

    return 0;
}