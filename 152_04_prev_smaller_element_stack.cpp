#include<iostream>
#include<vector>
#include<string.h>
#include<stack>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    vector<int> ans(v.size());

    stack<int> st;
    st.push(-1);

    for(int i=0; i<v.size(); i++){
        int current = v[i];

        while(st.top() >= current){
            st.pop();
        }

        ans[i] = st.top();
        st.push(current);
    }

    cout<<"Printing"<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}