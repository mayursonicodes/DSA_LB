#include<iostream>
#include<cmath>
using namespace std;

bool checkPrime(int n){
    // Square root can be used for optimization
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return false;
        else
            return true;
    }
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    bool isPrime = checkPrime(n);

    if(isPrime)
        cout<<"Prime number"<<endl;
    else
        cout<<"Non Prime number"<<endl;

    return 0;
}