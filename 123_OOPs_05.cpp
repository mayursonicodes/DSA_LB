//! Destruction -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{
    private:

    public:
        int age;
        string name;

        Animal(){
            this->age = 45;
            this->name = "sher";
        }

        ~Animal(){
            cout<<"I am inside destructor"<<endl;
        }

        void eat(){
            cout<<"Eating"<<endl;
        }
};

int main(){

    Animal ramesh;
    cout<<"Age is: "<<ramesh.age<<endl;
    cout<<"Name is: "<<ramesh.name<<endl<<endl;

    Animal* suresh = new Animal;
    cout<<"Age is: "<<suresh->age<<endl;
    cout<<"Name is: "<<suresh->name<<endl;

    delete suresh; //! In dynamically object creation, destructor will manually called because of heap memory storage

    return 0;
}