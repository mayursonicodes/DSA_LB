#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog: public Animal{
    public:
        void speak(){
            cout<<"Barking"<<endl; //! Overriding
        }
};

int main(){

    Animal a;
    a.speak();

    Dog x;
    x.speak();

    return 0;
}