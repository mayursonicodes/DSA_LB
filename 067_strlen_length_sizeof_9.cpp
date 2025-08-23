#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

int main(){

    char charName[] = "Mayur soni";

    cout << "C-String (char array): " << charName << endl;
    cout << "strlen(charName): " << strlen(charName) << endl;   // counts characters till '\0' -> 10
    cout << "sizeof(charName): " << sizeof(charName) << endl;   // total memory (10 + '\0') -> 11
    cout << endl;

    string  stringName = "Mayur soni";

    cout << "C++ string (string): " << stringName << endl;
    cout << "stringName.length(): " << stringName.length() << endl;   // number of characters -> 10
    cout << "sizeof(stringName): " << sizeof(stringName) << endl;     // size of string object (implementation-dependent, usually 24/32) 
    cout << endl;

    return 0;
}