//! Important (inclusion exclusion pattern)
//todo In output there is empty string also

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printSubsequence(string str, string output, int index){
    if(index >= str.length()){
        cout<<output<<endl;
        return;
    }

    //! exclude
    printSubsequence(str, output, index+1);

    //! include
    output.push_back(str[index]);
    printSubsequence(str, output, index+1);
}

int main(){

    string str = "abc";
    string output = "";

    int index = 0;

    printSubsequence(str, output, index);

    return 0;
}