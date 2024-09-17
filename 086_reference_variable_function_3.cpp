#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void solve(int &value){
    value+=10;
}

int main(){

    int a = 5;
    cout<<a<<endl;
    solve(a);
    cout<<a<<endl;

    return 0;
}