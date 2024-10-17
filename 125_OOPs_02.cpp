#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{
    public:
        virtual void speak(){
            cout<<"Speaking"<<endl;
        }
};

class Dog: public Animal{
    public:
        void speak(){
            cout<<"Barking"<<endl;
        }
};

int main(){

    //! UpCasting
    Animal* a = new Dog();
    a->speak(); //todo If virtual is not used, pointer type function will execute

    //! DownCastin
    Dog* b = (Dog*) new Animal();
    b->speak();

    return 0;
}