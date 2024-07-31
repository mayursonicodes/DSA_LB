// ! Convert the given string to upper case -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void convertUpperCase(char arr[]){
    for(int i = 0; i < strlen(arr); i++){
        arr[i] = arr[i] - 'a' + 'A';
    }
}

int main(){

    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 100);

    cout<<strlen(name);
    
    return 0;
}