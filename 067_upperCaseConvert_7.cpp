// ! Convert the given string to upper case and lower case -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void convertUpperCase(char arr[]){
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] != ' '){
            if(arr[i] >= 'a' && arr[i] <= 'z')
                arr[i] = arr[i] - 'a' + 'A';
        }
    }
}

void convertLowerCase(char arr[]){
    for(int i = 0; i < strlen(arr); i++){
        if(arr[i] != ' '){
            if(arr[i] >= 'A' && arr[i] <= 'Z')
                arr[i] = arr[i] - 'A' + 'a';
        }
    }
}

int main(){

    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 100);

    convertUpperCase(name);
    cout<<name;
    
    return 0;
}