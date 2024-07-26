// ! Binary search in a nearly sorted array -->

#include<iostream>
#include<vector>
using namespace std;

int binarySearchNearlySorted(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(target == arr[mid])
            return mid;
        else if(mid-1 >=start && target == arr[mid - 1])
            return mid-1;
        else if(mid+1 <= end && target == arr[mid + 1])
            return mid+1;

        if(target < arr[mid]){
            end = mid - 2;
        }
        else{
            start = mid + 2;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){

    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int result = binarySearchNearlySorted(arr, 10);

    if(result != -1){
        cout<<"Found at "<<result;
    }
    else{
        cout<<"Not found";
    }
    
    return 0;
}