/*
* lvalue --> variable having memory location. Ex: int x
* rvalue --> variable don't have memory location. Ex: 5, int &a=b(variable with another name);
*/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    const int x = 5;
    // x = 15; //! give error as x is constant
    cout<<x<<endl;

    return 0;
}