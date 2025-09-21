//! see 087_02_HCF.cpp for HCF
// ? LCM = (a*b) / HCF(a,b)

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

//! Give HCF of 2 numbers
int HCF(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    
    while(a > 0 && b > 0){
        if(a > b)
            a = a-b;
        else
            b = b-a;
    }

    return a==0 ? b : a;
}

//! Give LCM of 2 numbers
int LCM(int a, int b){
    return (a*b) / HCF(a, b);
}

int main(){

    int num1;
    int num2;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    cout<<"LCM is "<<LCM(num1, num2);

    return 0;
}