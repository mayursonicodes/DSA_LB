// ! Strings -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){
    
    string name;
    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<name<<endl;

    // ! Important function
    cout<<name.substr(0, 8);
    // todo more on official website

    return 0;
}