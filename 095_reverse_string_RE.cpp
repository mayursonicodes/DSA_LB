#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void reverse(string &name, int start, int end){
    if(start >= end) return;

    swap(name[start], name[end]);

    reverse(name, start+1, end-1);
}

int main(){

    string name = "Mayur";
    int start = 0;
    int end = name.size() - 1;

    cout<<name<<endl;
    reverse(name, start, end);
    cout<<name<<endl;

    return 0;
}