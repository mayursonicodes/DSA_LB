#include<iostream>
#include<vector>
using namespace std;

void change(int *p){
    cout<<"Value store in *p is "<<p<<endl;
    *p = *p+10;
}

int main(){

    int a = 5;
    int *ptr = &a;

    cout<<a<<endl;
    cout<<"Address of a is "<<&a<<endl;
    change(ptr);
    cout<<a<<endl;
    
    return 0;
}