//! Access Modifiers --> private, public, protected

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

        //! setter
        void setWeight(int n){
            weight = n;
        }

        //! getter
        int getWeight(){
            return weight;
        }
};

int main(){

    Animal ramesh;
    
    ramesh.age = 45;
    ramesh.name = "sher";

    cout<<"Age is: "<<ramesh.age<<endl;
    cout<<"Name is: "<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.sleep();

    ramesh.setWeight(187);
    cout<<"Weight is: "<<ramesh.getWeight()<<endl;

    return 0;
}