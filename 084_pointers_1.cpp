// ! size of any type of pointer(including array pointer) is always 8 because it stores address and address is always of 8 size
// ! Also depend on architecture

#include<iostream>
#include<vector>
using namespace std;

int main(){

    int a = 5;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Address of a is "<<&a<<endl;

    int *x = &a;
    cout<<"Value of x is "<<x<<endl;
    cout<<"Value of a using x is "<<*x<<endl;
    cout<<"Address of x is "<<&x<<endl<<endl;
    
    x++; // ! increment by 4 as x store address of int and int is of 4 byte
    cout<<x;

    cout<<endl<<"Size of x is "<<sizeof(x);

    // todo BAD practice (segmentation fault because garbage value address not exist)
    int *ptr;
    cout<<*ptr;

    // todo NULL pointer (also segmentation fault because 0 address not exist)
    int *nPtr = 0;
    cout<<*nPtr;
    
    return 0;
}