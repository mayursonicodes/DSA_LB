//! Application -> Search in unbounded(infinite) array
//!             -> Better than binary search if array is large and target is at starting

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target, int start, int end){
    while(start <= end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target)
            return mid;
        else if(arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int exponentialSearch(vector<int> arr, int target){
    if(arr[0] == target)
        return 0;
    
    int arrSize = arr.size()-1;
    int i = 1;
    while(i<=arrSize && arr[i] < target){
        i *= 2;
    }
    return binarySearch(arr, target, i/2, min(i, arrSize)); //! if i goes to greater than array size then arrSize will be considered
}

int main(){

    vector<int> arr{3,4,5,6,11,13,14,15,56,70};
    cout<<exponentialSearch(arr, 56);

    return 0;
}