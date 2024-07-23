// ! Total number of occurance of an element -->

#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            ans = mid;
            end = mid - 1;
        }
        else if(target < element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOccurance(vector<int> arr, int target){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        int element = arr[mid];

        if(element == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target < element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int totalOccurance(vector<int> arr, int target){
    return lastOccurance(arr, target) - firstOccurance(arr, target) + 1;
}

int main(){

    vector<int> arr{1,2,3,4,4,4,4,4,5,6};
    int result = totalOccurance(arr, 4);
    cout<<result;
    
    return 0;
}