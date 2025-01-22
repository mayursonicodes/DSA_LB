#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

void insertBottom(stack<int> &s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    insertBottom(s, target);

    s.push(topElement);
}

void reverseStack(stack<int> &s){
    //! Base case
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();

    //! Recursive call
    reverseStack(s);

    //! Backtracking
    insertBottom(s, target);
}

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    reverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}