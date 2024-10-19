/*
! GLOBAL VARIABLE -->
    * Written outside a function
    * Accessable to all function (same copy) 
! LOCAL VARIABLE -->
    * Written inside a function
    * Accessable inside that function scope only
*/

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int x = 2; //! GLOBAL VARIABLE

void fun(){
    int x = 69;
    cout<<"Local variable: "<<x<<endl;
    cout<<"Global variable: "<<::x<<endl;
}

int main(){

    int x = 100;
    cout<<"Local variable: "<<x<<endl;
    cout<<"Global variable: "<<::x<<endl<<endl;

    ::x = 999; //! changing global variable value
    cout<<"Global variable: "<<::x<<endl<<endl;

    {
        int x = 451;
        cout<<"Local variable: "<<x<<endl;
        cout<<"Global variable: "<<::x<<endl<<endl;     
    }

    fun();
    return 0;
}