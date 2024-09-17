#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    int *ptr = 0;
    int a = 10;

    *ptr = a; // give error as ptr is pointing NULL i.e. pointing to 00000000 address which does not exist

    cout<<*ptr<<endl;

    return 0;
}