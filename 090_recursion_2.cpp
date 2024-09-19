#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void reverseCount(int n){
    if(n == 0) return;

    cout<<n<<" ";

    reverseCount(n-1);
    
}

int main(){

    int n;
    cout<<"Enter your number: ";
    cin>>n;

    reverseCount(n);

    return 0;
}