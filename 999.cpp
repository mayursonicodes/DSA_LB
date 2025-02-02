#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

class Base {
    public:
    virtual void display() { std::cout << "Base class\n"; }
};

class Derived: public Base {
    public:
    void display() override { std::cout << "Derived class\n"; }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
    return 0;
}