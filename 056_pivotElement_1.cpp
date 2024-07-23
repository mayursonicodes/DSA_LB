// ! Pivot Element in a rotated and sorted array -->

#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int> arr){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        // todo Should be write first otherwise overflow the size
        if(start == end){
            return start;
        }
        if(arr[mid] > arr[mid+1] && mid <= end){
            return mid;
        }
        if(arr[mid] < arr[mid-1] && mid-1 >= start){
            return mid-1;
        }

        if(arr[start] > arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid +1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){

    // vector<int> arr{4,5,6,7,8};
    vector<int> arr{9,10,4,5,6,7,8};
    int result = pivotElement(arr);
    cout<<"Pivot Element is "<<arr[result];
    
    return 0;
}