// ! GCD/HCF of two numbers -->

// ? GCD -> greatest common divisor
// ? HCF -> highest common factor
// ? HCF of 24, 72 is 24

// GCD(a,b) -> a>b GCD(a-b, b)
//          -> a<b GCD(b-a, a)

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

// todo Euclid's algorithm
int HCF(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;
    
    while(a>0 && b>0){
        if(a>b)
            a = a-b;
        else
            b = b-a;
    }
    return a == 0 ? b : a;
}

int main(){

    int num1;
    int num2;

    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;

    cout<<"HCF is "<<HCF(num1, num2);

    return 0;
}