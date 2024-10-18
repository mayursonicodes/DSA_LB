#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    //! const with pointer -->
    const int *a = new int(5);
    // int const *a = new int(5); //todo can be also written as this
    cout<<*a<<endl; 

    //! give error (can't change the content of pointer)
    // *a = 100;

    int b = 20;
    a = &b; //! pointer itself can be reassigned
    cout<<*a<<endl;

    return 0;
}