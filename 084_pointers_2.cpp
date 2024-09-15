#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a = 5;
    int *ptr1 = &a;
    // copy of pointer
    int *ptr2 = ptr1;

    cout<<*ptr1<<"  "<<*ptr2;
    
    return 0;
}