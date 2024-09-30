//! strrchr(string, ch); --> It can also be used

//! check from left side -->
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void lastOccurance(string name, int index, int &ans, int check){
    if(index >= name.size()) return;

    if(name[index] == check) ans = index;

    lastOccurance(name, index+1, ans, check);
}

int main(){

    string name = "abcddedg";
    char check = 'd';
    int ans = -1;
    int index = 0;

    lastOccurance(name, index, ans, check);
    cout<<check<<" is at index: "<<ans;

    return 0;
}

//! check from right side -->
#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void lastOccurance(string name, int index, int &ans, int check){
    if(index < 0) return;

    if(name[index] == check){
        ans = index;
        return;
    }

    lastOccurance(name, index-1, ans, check);
}

int main(){

    string name = "abcddedg";
    char check = 'd';
    int ans = -1;
    int index = name.size() - 1;

    lastOccurance(name, index, ans, check);
    cout<<check<<" is at index: "<<ans;

    return 0;
}