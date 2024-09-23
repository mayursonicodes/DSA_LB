#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void change(int arr[]){
    arr[2] = 100;
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};

    cout<<arr[2]<<endl;
    change(arr);
    cout<<arr[2];

    return 0;
}