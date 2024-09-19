#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void reverseCount(int n){
    if(n == 0) return;

    reverseCount(n-1);

    cout<<n<<" ";
    
}

int main(){

    int n;
    cout<<"Enter your number: ";
    cin>>n;

    reverseCount(n);

    return 0;
}