#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

void findMid(stack<int> &s, int totalSize){
    if(s.empty()){
        cout<<"There is no element in stack"<<endl;
        return;
    }

    //! Base Case
    if(s.size() == totalSize/2 + 1){
        cout<<"Middle element is: "<<s.top()<<endl;
        return ;
    }

    int temp = s.top();
    s.pop();

    //! Recursive Call
    findMid(s, totalSize);

    //! Backtracking
    s.push(temp);
}

int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    int totalSize = s.size();
    findMid(s, totalSize);

    return 0;
}