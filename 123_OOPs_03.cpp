//! Dynamically creating object -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{
    private:
        int weight;

    public:
        int age;
        string name;

        void eat(){
            cout<<"Eating"<<endl;
        }

        void sleep(){
            cout<<"Sleeping"<<endl;
        }

        void setWeight(int weight){
            //! this means --> pointer to current object
            this->weight = weight;
        }

        int getWeight(){
            return weight;
        }
};

int main(){

    //! Dynamic Memory
    Animal* ramesh = new Animal;
    
    // ramesh.age = 45; //! give error because ramesh is now storing address, it is not a object here

    //todo We can use any of this method
    (*ramesh).age = 45;
    ramesh->name = "sher";

    cout<<"Age is: "<<(*ramesh).age<<endl;
    cout<<"Name is: "<<(*ramesh).name<<endl;

    return 0;
}