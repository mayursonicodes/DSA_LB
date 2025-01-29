//! Reverse First K elements of Queue

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

void modifyQueue(queue<int> &q, int k){

    int qSize = q.size();
    int remElement = qSize - k;

    if(k <= 0 || k > qSize)
        return;

    stack<int> st;

    //! Pushing first K elements in stack
    while(k--){
        st.push(q.front());
        q.pop();
    }

    //! Pushing first K elements in reverse order in queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }

    //! Pushing remaining elements in original order in queue
    while(remElement--){
        int element = q.front();
        q.pop();
        q.push(element);
    }
}

int main(){

    return 0;
}
    