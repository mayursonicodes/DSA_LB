// ! Method 1 --> Divide Method
// 1. Divide number by 2.
// 2. Store reminder. (That will be a bit in binary number)
// 3. Repeat above steps with the Quotient until quotient is less than 2.
// 4. Reverse the bits so obtained.

#include<iostream>
#include<cmath>
using namespace std;

int decimalToBinary(int n){
    int binaryNo = 0;
    int i = 0;
    while(n>0){
        int bit = n % 2;
        binaryNo = bit * pow(10, i++) + binaryNo;
        n = n / 2;
    }
    return binaryNo;
}

int main(){

    int n;
    cout<<"Enter the decimal number: ";
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<binary;
    
    return 0;
}