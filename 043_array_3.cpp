// ! Reverse array -->

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    for(int i = 0; i < (sizeof(arr)/4)/2; i++){
        swap(arr[i], arr[size-1-i]);
    }

    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}