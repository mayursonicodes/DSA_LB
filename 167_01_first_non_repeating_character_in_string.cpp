//! Find first non-repeating character of given string

#include<iostream>
#include<vector>
#include<string.h>
#include<queue>
#include<stack>
using namespace std;

string findFirst(string str){
    string ans = "";
    int freq[26] = {0};
    queue<char> q;

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch - 'a']++;
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front() - 'a'] > 1)
                q.pop();
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty())
            ans.push_back('#');
    }

    return ans;
}

int main(){

    // cout<<findFirst("zarcaazrd");
    cout<<findFirst("aba");

    return 0;
}