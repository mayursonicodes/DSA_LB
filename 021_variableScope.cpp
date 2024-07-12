#include<iostream>
using namespace std;

int raja = 45;
// global variable

int main(){
    
    int x = 5;
    cout<<"Value of x outside: "<<x<<endl;

    if(true){
        int x = 8;
        // this value of x is only valid in if curly braces
        cout<<"Value of x inside: "<<x<<endl;

        int raja = 2;
        cout<<"Value of raja inside: "<<raja<<endl;
    }

    cout<<"Value of raja outside: "<<raja<<endl;
    
    return 0;
}