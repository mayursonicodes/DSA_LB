// ! Search in Rotated Sorted Array -->

#include<iostream>
#include<vector>
using namespace std;

int pivotElement(vector<int> arr){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){
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

int binarySearch(vector<int> arr, int start, int end, int target){

    int mid = start + (end - start) / 2;

    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(vector<int>& num, int target){

    int pivot = pivotElement(num);
    // cout<<pivot<<endl;

    int ans;

    if(target >= num[0] && target <= num[pivot]){
        ans = binarySearch(num, 0, pivot, target);
    }
    else{
        ans = binarySearch(num, pivot+1, num.size()-1, target);
    }

    return ans;
}

int main(){

    // vector<int> arr{4,5,6,7,0,1,2};
    vector<int> arr{1,3};
    int result = search(arr, 3);

    if(result != -1){
        cout<<result;
    }
    else{
        cout<<-1;
    }
    
    return 0;
}