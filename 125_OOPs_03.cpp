//! Difference between compile time & run time compileation

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{
    public:
        Animal(){
            cout<<"You are in animal constructor"<<endl;
        }
};

class Dog: public Animal{
    public:
        Dog(){
            cout<<"You are in dog constructor"<<endl;
        }
};

int main(){

    Animal* a = new Animal();
    cout<<endl;

    Dog* b = new Dog();
    cout<<endl;

    Animal* x = new Dog(); //! In heap, object is created
    cout<<endl;

    Dog* y = (Dog*) new Animal();
    cout<<endl;

    return 0;
}