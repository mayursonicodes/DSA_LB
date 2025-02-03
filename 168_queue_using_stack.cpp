//! Another method also in which pop, peek take O(1) time

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

class MyQueue {
public:

    stack<int> s1, s2;
    
    void push(int x) {
        s1.push(x);    
    }
    
    int pop() {
        int ans = -1;
        if(!s2.empty()){
            ans = s2.top();
            s2.pop();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            ans = s2.top();
            s2.pop();
        }

        return ans;
    }
    
    int peek() {
        int ans = -1;
        if(!s2.empty()){
            ans = s2.top();
        }
        else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            ans = s2.top();
        }

        return ans;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main(){

    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    q.pop();
    cout<<q.peek()<<endl;

    q.push(999);
    cout<<q.peek()<<endl;

    return 0;
}