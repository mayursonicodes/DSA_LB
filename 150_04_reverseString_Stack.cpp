#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

int main(){

    string name = "Mayur Soni";

    stack<char> s;
    for(int i=0; i<name.length(); i++){
        s.push(name[i]);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}