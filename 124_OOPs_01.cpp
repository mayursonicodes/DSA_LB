#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"You are eating"<<endl;
        }
};

class Dog: public Animal{

};

int main(){

    Dog x;
    x.eat();

    return 0;
}