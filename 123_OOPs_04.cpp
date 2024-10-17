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

        //! Constructor -->
        //todo Default Constructor
        Animal(){
            this->age = 45;
            this->name = "sher";
            cout<<"Default Constructor Called"<<endl;
        }

        //todo Parametrised Constructor
        Animal(int age, string name){
            this->age = age;
            this->name = name;
            cout<<"Parametrised Constructor Called"<<endl;
        }

        //todo Copy Constructor
        Animal(Animal &obj){ //! if we don't use &, it will stuck in infinite loop
            this->age = obj.age;
            this->name = obj.name;
            cout<<"Copy Constructor Called"<<endl;
        }

        void eat(){
            cout<<"Eating"<<endl;
        }
};

int main(){

    Animal ramesh;
    cout<<"Age is: "<<ramesh.age<<endl;
    cout<<"Name is: "<<ramesh.name<<endl<<endl;

    Animal suresh(100, "cat");
    cout<<"Age is: "<<suresh.age<<endl;
    cout<<"Name is: "<<suresh.name<<endl<<endl;

    Animal ram(ramesh);
    // Animal ram = ramesh; //! we can also use this syntax
    cout<<"Age is: "<<ram.age<<endl;
    cout<<"Name is: "<<ram.name<<endl<<endl;

    return 0;
}