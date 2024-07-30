// ! Char Array -->

#include<iostream>
#include<string.h>
using namespace std;

int main(){

    char name[100];
    name[0] = 'a';
    name[1] = 'b';

    cout<<"Enter your name: ";
    // Input method, only applicable in char array
    cin>>name;
    cout<<"Your name is "<<name<<endl;

    cout<<int(name[5]);
    // end with null character'\0'
    return 0;
}