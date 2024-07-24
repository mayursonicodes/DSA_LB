// ! Binary search in 2D array -->

#include<iostream>
#include<vector>
using namespace std;

bool binarySearch2D(int arr[][4], int rows, int cols, int target){
    
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){
        int rowIndex = mid / cols;
        int colIndex = mid % cols;

        if(target == arr[rowIndex][colIndex]){
            cout<<"At "<<rowIndex<<" "<<colIndex;
            return true;
        }
        else if(target > arr[rowIndex][colIndex]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int main(){

    int arr[5][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};

    bool result = binarySearch2D(arr, 5, 4, 15);

    if(result){
        cout<<" Found";
    }
    else{
        cout<<"Not found";
    }
    
    return 0;
}