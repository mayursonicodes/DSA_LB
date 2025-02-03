//! We can also make it using 2 queue approach

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

class MyStack {
public:

    queue<int> q;
    
    void push(int x) {
        q.push(x);

        for(int i=0; i<q.size()-1; i++){
            int front = q.front();
            q.push(front);
            q.pop();
        }    
    }
    
    int pop() {
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(){

    

    return 0;
}