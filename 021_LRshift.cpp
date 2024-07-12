#include<iostream>
using namespace std;

int main(){
    
    int a = 12;
    // left shift always result in 2 multiple
    a = a << 1;
    cout<<a<<endl;

    int b = 12;
    // right shift
    b = b >> 1;
    cout<<b<<endl;

    return 0;
}