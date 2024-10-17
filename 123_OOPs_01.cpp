#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

class Animal{

};

class Animal2{
    int a;
    char x; //! read padding & greedy alignment
};

int main(){

    cout<<"Size of empty class is: "<<sizeof(Animal)<<endl;
    cout<<"Size of Animal2 class is: "<<sizeof(Animal2)<<endl;

    return 0;
}