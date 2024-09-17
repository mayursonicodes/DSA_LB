#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;

    (*ptr)++; // f will be 11.5
    *ptr = p; // f will be 2.5

    cout<<*ptr<<" "<<f<<" "<<p;

    return 0;
}