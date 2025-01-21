#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

int main(){

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"Top of stack: "<<st.top()<<endl;

    cout<<"Performing POP operation: "<<endl;
    st.pop();

    cout<<"Top of stack: "<<st.top()<<endl;

    cout<<"Size of stack: "<<st.size()<<endl;

    if(st.empty()) cout<<"Stack is empty!"<<endl; 
    else cout<<"Stack is not empty!"<<endl;

    //! Traversing the stack
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}