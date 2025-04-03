#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printDigit(int n){
    if(n == 0) return;

    printDigit(n/10);

    cout<<n%10<<" ";
}

int main(){

    int n = 485;

    if(n == 0) cout<<0;

    printDigit(n);

    return 0;
}