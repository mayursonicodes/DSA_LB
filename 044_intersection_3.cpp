// ! Intersection of array/vector -->

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector <int> &ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    vector <int> a{1,2,2,3,4,6,8,8};
    vector <int> b{2,2,3,8};
    vector <int> ans;

    for(int i = 0; i < a.size(); i++){
        if(a[i-1] != a[i]){
            for(int j = 0; j < b.size(); j++){
                if(a[i] == b[j]){
                    ans.push_back(a[i]);
                    break;
                }
            }
        }
    }

    // for(int i = 0; i < a.size(); i++){
    //     for(int j = 0; j < b.size(); j++){
    //         if(a[i] == b[j]){
    //             ans.push_back(a[i]);
    //             break;
    //         }
    //     }
    // }

    printVector(ans);
    
    return 0;
}