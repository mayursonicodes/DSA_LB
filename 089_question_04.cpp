#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    char ch = 'a';
    char *ptr = &ch;

    ch++; // ch will be increment by 1 i.e. b

    cout<<*ptr<<endl;

    return 0;
}