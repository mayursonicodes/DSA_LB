//! 2D array using Dynamic memory allocation
/*
todo To deallocate 2D array -->
    STEP 1 ->
    for(int i=0; i<row; i++){
        delete []arr[i];
    }

    STEP 2 ->
    delete []arr;
*/  

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    int row = 5;
    int col = 3;

    int** arr = new int* [5];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}