// * * * * * 
// * * * * * 
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    for(int row = 0; row < n; row++){
        for(int column = 0; column <5; column++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}