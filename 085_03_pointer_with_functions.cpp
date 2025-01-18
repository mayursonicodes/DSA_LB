// ! size in function is always 8 because arr is passed in a pointer and pointer is of 8 size always as it stores address.
// ! when we pass array in a function, only the address of array is passed not the whole array is passed.
// ! The function parameter of an array is pointer which store the address of first element
#include<iostream>
#include<vector>
using namespace std;

void size(int arr[]){
    cout<<"Size of arr in function: "<<sizeof(arr)<<endl;
}

int main(){

    int arr[] = {4,54,6,8,78};
    cout<<"Size of arr in main: "<<sizeof(arr)<<endl;
    size(arr);
    
    return 0;
}