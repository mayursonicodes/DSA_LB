#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int factorial(int n){
    if(n == 1) return 1;
    
    int ans = n * factorial(n-1);
    return ans;
}

int main(){

    int n;
    cout<<"Enter your number: ";
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial is: "<<ans<<endl;

    return 0;
}