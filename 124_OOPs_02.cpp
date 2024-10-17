#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class A{
    public:
        int maths;

        A(){
            maths = 100;
        }
};

class B{
    public:
        int maths;

        B(){
            maths = 200;
        }
};

class C: public A, public B{
    public:
        int hindi;
};

int main(){

    C obj;
    cout<<obj.A::maths<<endl; //! Ambiguity (diamond problem)
    cout<<obj.B::maths<<endl; //! scope resolution is used

    return 0;
}