// ! Put all the -ve number on left side and +ve on right -->
// ? Also known as Dutch National Flag Algorithm (2 pointer approach) -->

#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// ! Dutch National Flag Algorithm (2 pointer approach) -->
// void sortNegPos(int arr[], int size){
//     int start = 0;
//     int end = size - 1;

//     while(start < end){
//         if(arr[start] < 0){
//             start++;
//         }
//         else if(arr[end] > 0){
//             end--;
//         }
//         else{
//             swap(arr[start], arr[end]);
//         }
//     }
// }

void sortNegPos(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int pivot = 0;

    while(start < end){
        if(arr[pivot] < 0){
            pivot++;
            start++;
        }
        else{
            swap(arr[pivot], arr[end]);
            end--;
        }
    }
}

int main(){

    int arr[] = {1, -5, 45, 12, -32, 5, 10, -3};
    int size = sizeof(arr)/sizeof(int);

    printArray(arr, size);

    sortNegPos(arr, size);

    printArray(arr, size);
    
    return 0;
}