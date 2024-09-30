#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool isPalindrome(string name, int start, int end){
    if(start >= end) return true;

    if(name[start] != name[end]) return false;

    return isPalindrome(name, start+1, end-1);
}

int main(){

    string name = "racecar";
    cout<<isPalindrome(name, 0, name.size()-1);

    return 0;
}