// ! Method -->
// 1. Multiple each digit with its place value(2^placeValue).
// 2. Add up all place values.
// 3. Sum is the Decimal number.

#include<iostream>
#include<cmath>
using namespace std;

int binaryToDecimal(int n){
    int decimal = 0;
    int i = 0;
    while(n > 0){
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n = n / 10;
    }
    return decimal;
}

int main(){

    int n;
    cout<<"Enter the binary number: ";
    cin>>n;
    cout<<binaryToDecimal(n);
    
    return 0;
}