// ! Transpose of 2D array -->

#include<iostream>
using namespace std;

void printArray(int arr[][3], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printArray(arr, 3, 3);
    cout<<endl;

    int newArr[3][3];

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 3; col++){
            newArr[col][row] = arr[row][col];
        }
    }
    
    printArray(newArr, 3, 3);

    return 0;
}