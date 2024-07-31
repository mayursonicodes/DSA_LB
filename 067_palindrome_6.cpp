#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool palindromeCheck(char arr[]){
    int i = 0;
    int j = strlen(arr) - 1;

    while(i < j){
        if(arr[i] != arr[j])
            return 0;
        i++, j--;
    }
    return 1;
}

int main(){

    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 100);

    cout<<palindromeCheck(name);
    
    return 0;
}