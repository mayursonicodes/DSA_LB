// ! Replace all spaces in a array with @ -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void replaceSpaces(char arr[]){
    int i = 0;
    
    while(arr[i] != '\0'){
        if(arr[i] == ' ')
            arr[i] = '@';
        i++;
    }
}

int main(){

    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 100);

    replaceSpaces(name);
    cout<<name;
    
    return 0;
}