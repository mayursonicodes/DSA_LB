#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    int a[] = {1,2,3,4};
    int *p = a++; // it is constant pointer so error
    // int *p = (a+1); // we can do this instead

    cout<<*p<<endl;

    return 0;
}