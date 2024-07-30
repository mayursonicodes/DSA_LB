// ! Number of elements present in a char array -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int noOfElements(char arr[]){
    int i = 0;
    int element = 0;

    while(arr[i] != '\0'){
        element++;
        i++;
    }
    return element;
}

int main(){

    char arr[100];
    cout << "Enter your name: ";
    cin.getline(arr, 100);
    
    cout << noOfElements(arr) << endl;
    cout<<strlen(arr);
    
    return 0;
}