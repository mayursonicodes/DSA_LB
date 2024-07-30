// ! Odd occuring element in an array -->
// ! LeetCode 540
// ? all element occur even number of times except one
// ? all repeating occurance of element appear in pairs
// ? pairs are not adjacent
// ? pair is of only

// todo odd element is always on even index as per the observations
// todo left part --> pair starts from even and end on odd index
// todo right part --> pair starts from odd and end on evens index

#include<iostream>
#include<vector>
using namespace std;

int oddOccuringElement(vector<int> arr){

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        // single element in an array
        if(start == end)
            return start;
        
        if((mid & 1) == 0){
            // mid is even
            if(arr[mid] == arr[mid + 1]){
                start = mid + 2;
            }
            else{
                end = mid;
            }
        }
        else{
            // mid is odd
            if(arr[mid] == arr[mid - 1]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){

    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int result = oddOccuringElement(arr);
    cout<<arr[result];
    
    return 0;
}