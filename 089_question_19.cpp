#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void square(int *p){
    int a = 10;
    p = &a;
    *p = (*p) * (*p);
}

int main(){

    int a = 10;

    square(&a);
    
    cout<<a<<endl;

    return 0;
}