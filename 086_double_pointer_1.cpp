#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a = 5;
    int *x = &a;
    int **y = &x;

    cout<<*x<<endl;
    cout<<*y<<endl;
    cout<<**y<<endl;
    
    return 0;
}