#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printArray(int arr[], int size, int index){
    if(index >= size) return;

    cout<<arr[index]<<" ";

    printArray(arr, size, index+1); //! work with (++index) not with (index++)
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;
    int index = 0;

    printArray(arr, size, index);

    return 0;
}

//! ================================================================================================

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printArray(int arr[], int size){
    if(size == 0) return;

    cout<<arr[0]<<" ";

    printArray(arr+1, size-1);
}

int main(){

    int arr[] = {10,20,30,40,50};
    int size = 5;

    printArray(arr, size);

    return 0;
}