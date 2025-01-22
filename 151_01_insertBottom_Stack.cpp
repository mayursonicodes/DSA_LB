#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

void solve(stack<int> &s, int target){

    //! Base case
    if(s.empty()){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    //! Recursive call
    solve(s, target);

    //! Backtracking
    s.push(topElement);
}

void insertBottom(stack<int> &s){
    if(s.empty()){
        cout<<"Stack is empty, can't insert."<<endl;
        return;
    }

    int target = s.top();
    s.pop();

    solve(s, target);
}

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    insertBottom(s);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}