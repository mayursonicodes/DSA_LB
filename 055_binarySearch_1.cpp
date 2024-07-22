// ! Binary Search -->

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> &arr, int target){

    int start = 0;
    int end = arr.size();
    // ! Important
    int mid = start + (end - start) / 2;
    int count = 0;

    while(start <= end){
        count++;
        int element = arr[mid];

        if(element == target){
            cout<<"Count: "<<count<<endl;
            return 1;
        }
        else if(target < element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    cout<<"Count: "<<count<<endl;
    return 0;
}

int main(){

    vector<int> arr{1,2,3,4,5,6,7,8,9};
    if(binarySearch(arr, 5))
        cout<<"Target found";
    else
        cout<<"Target not found";
    
    return 0;
}