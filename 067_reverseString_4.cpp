// ! Reverse a string -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void reverseStrinig(char arr[]){
    int i = 0;
    int j = strlen(arr) - 1;

    while(i < j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main(){

    char arr[100];
    cout<<"Enter your name: ";
    cin.getline(arr, 50);
    reverseStrinig(arr);
    
    cout<<arr;
        
    return 0;
}