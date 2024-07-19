// ! Union of array/vector -->

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector <int> &ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    vector <int> a{1,2,3,3,4,6,8};
    vector <int> b{2,2,3,5,8,10};
    vector <int> ans;

    for(int i = 0; i < a.size(); i++){
        if(a[i-1] == a[i]){
            a[i] = INT16_MIN;
            continue;
        }
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                b[j] = INT16_MIN;
            }
        }
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != INT16_MIN){
            ans.push_back(a[i]);
        }
    }

    for(int i = 0; i < b.size(); i++){
        if(b[i] != INT16_MIN){
            ans.push_back(b[i]);
        }
    }

    printVector(ans);

    return 0;
}