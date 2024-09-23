#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void arrayMax(int arr[], int size, int index, int &maxi){ //! if use (int maxi), value will not change in main program
    if(index >= size) return;

    if(arr[index] > maxi) maxi=arr[index];

    arrayMax(arr, size, index+1, maxi);
}

int main(){

    int arr[] = {10,5,100,0,6,4,2};
    int size = sizeof(arr) / sizeof(int);
    int index = 0;
    int maxi = INT16_MIN;

    arrayMax(arr, size, index, maxi);

    cout<<maxi<<endl;

    return 0;
}