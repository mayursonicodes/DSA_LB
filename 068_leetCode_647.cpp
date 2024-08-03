// ! Palindromic Substrings -->

// todo Memory limit exceeded -->
#include<iostream>
#include<set>
#include<vector>
#include<string.h>
using namespace std;

bool palindrome(string answer){
    int start = 0;
    int end = answer.size() - 1;

    while(start < end){
        if(answer[start] != answer[end]){
            return false;
        }
        else{
            start ++, end--;
        }
    }
    return true;
}

// ! return unique substring -->
set<string> subString(string name){
    set<string> subTexts;

    for(int i = 0; i < name.length(); i++){
        for(int j = i + 1; j <= name.length(); j++){
            // ! use of insert in set data structure
            subTexts.insert(name.substr(i, j-i));
        }
    }
    return subTexts;
}

int main(){

    string name = "aaa";
    set<string> answer = subString(name);

    for(auto i: answer){
        cout<<i<<endl;
    }

    int count = 0;

    for(auto i: answer){
        if(palindrome(i)){
            count++;
        }
    }

    cout<<count;
    
    return 0;
}

// --------------------------------------------------------------------------------------------------------

// todo Love Babber -->
// ! very very important

