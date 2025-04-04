#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool sortedCheck(vector<int> &vec, int &size, int index){ //! Use reference where ever is needed to save memory
    if(index == size-1)
        return true;

    if(vec[index] < vec[index+1])
        return sortedCheck(vec, size, index+1); //! we have use return because function is of bool type
    else
        return false;
}

int main(){

    vector<int> vec{10,20,30,50,80};
    int size = vec.size();
    int index = 0;

    cout<<sortedCheck(vec, size, index);

    return 0;
}