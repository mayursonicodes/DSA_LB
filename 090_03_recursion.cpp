#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void assendingCount(int n){
    if(n == 0) return;

    assendingCount(n-1);

    cout<<n<<" ";
    
}

int main(){

    int n;
    cout<<"Enter your number: ";
    cin>>n;

    assendingCount(n);

    return 0;
}