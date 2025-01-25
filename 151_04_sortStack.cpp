#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

void insertSort(stack<int> &s, int target){
    //! Base Case
    if(s.empty()){
        s.push(target);
        return;
    }
    //! Base Case
    if(s.top() >= target){
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();

    //! Recursive Call
    insertSort(s, target);
    
    s.push(topElement);
}

void sortStack(stack<int> &s){
    //! Base Case
    if(s.empty()){
        return;
    }

    int topElement = s.top();
    s.pop();

    //! Recursive Call
    sortStack(s);

    //! Backtracking
    insertSort(s, topElement);
}

int main(){

    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}