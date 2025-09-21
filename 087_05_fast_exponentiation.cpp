//! Very important

/*
? if b is even
?     a^b = (a^(b/2))^2
? 
? if b is odd
?     a^b = (a^(b/2))^2 . a
*/

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

int fast_exponential(int num, int pow){
    int ans = 1;
    while(pow > 0){
        if(pow & 1)
            ans = ans*num;
        num = num * num;
        pow >>= 1;
    }
    return ans;
}

int main(){

    int num;
    int pow;
    
    cout<<"Enter your number: ";
    cin>>num;

    cout<<"Enter Power: ";
    cin>>pow;

    cout<<fast_exponential(num, pow);

    return 0;
}