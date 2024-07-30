// ! character input with spaces -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name, 5); // take 4 space only
    cout<<"Your name is "<<name<<endl;

    cout<<name[4];
    
    return 0;
}