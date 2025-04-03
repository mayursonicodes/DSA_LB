#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int fib(int n){
    if(n == 1) return 0; // first position
    if(n == 2) return 1; // second position

    return fib(n-1) + fib(n-2);
}

int main(){

    int n;
    cout<<"Enter the term you want: ";
    cin>>n;

    cout<<fib(n);

    return 0;
}