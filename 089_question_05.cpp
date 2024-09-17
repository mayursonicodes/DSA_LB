#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    int a = 7;
    int *c = &a;

    c = c + 1; // address which is store in c will increment by 4 as int

    cout<<a<<" "<<*c<<endl;

    return 0;
}