// ! Check wheater the number is odd or even using bitwise operators -->

#include<iostream>
using namespace std;

void checkOddEven(int n){
    if((n & 1) == 0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd number"<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    checkOddEven(n);
    
    return 0;
}