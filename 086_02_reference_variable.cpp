// ! cannot create null reference variable
// ! Pointers are hard to understand

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a = 5;
    int &b = a; // same memory location but different names

    cout<<a<<endl;
    cout<<b<<endl;

    a++, b++;

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}