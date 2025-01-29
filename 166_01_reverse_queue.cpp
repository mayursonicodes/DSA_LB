#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> st;

    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

void reverseQueueRecursion(queue<int> &q){
    //! Base Case
    if(q.empty())
        return;

    int element = q.front();
    q.pop();

    //! Recursive call
    reverseQueueRecursion(q);

    q.push(element);
}

int main(){

    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    reverseQueueRecursion(q);

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}