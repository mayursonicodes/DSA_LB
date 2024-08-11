// ! Custom Comparator -->

#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;

bool desc(int first, int second){
    return first > second;
}

int main(){

    vector<int> arr{1,2,4,6,8,2,6,8,3,45};

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // ! Normal Sort -->
    sort(arr.begin(), arr.end());

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // ! Custom Comparator Sort -->
    sort(arr.begin(), arr.end(), desc);

    for(auto i: arr){
        cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}