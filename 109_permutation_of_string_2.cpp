//! Important
//! Backtracking

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void permutation(string &str, int i){ //! if we don't use &str then backtracking is not required because copy will pass
    if(i >= str.length()){
        cout<<str<<" ";
        return;
    }

    //todo swapping
    for(int j = i; j<str.length(); j++){
        swap(str[i], str[j]);
        permutation(str, i+1);
        //todo backtracking (recreating old string)
        swap(str[i], str[j]);
    }
}

int main(){

    string str = "abc";
    int i = 0;

    permutation(str, i);

    return 0;
}