//! Used for checking prime numbers

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

vector<bool> isPrime(int n){
    vector<bool> sieve(n, true);
    sieve[0] = sieve[1] = false;

    // for(int i=2; i<n; i++){
    for(int i=2; i<=sqrt(n); i++){ //! Optimazation 2
        if(sieve[i]){
            // int table = i*2;
            int table = i*i; //! optimization 1 (first unmarked number would be i*i, as others have been marked by 2 to (i-1))
            while(table<n){
                sieve[table] = false;
                table += i;
            }
        }
    }
    return sieve;
} 

int main(){

    vector<bool> answer = isPrime(25);
    for(int i=0; i<25; i++){
        if(answer[i]){
            cout<<i<<" ";
        }
    }

    return 0;
}