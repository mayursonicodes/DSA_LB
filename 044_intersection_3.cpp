// ! Intersection of array/vector -->

#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;

void printVector(vector <int> &ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

//! Used for unordered array/vector
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> ans;

    for(auto i: nums2){
        if(set1.count(i))
            ans.insert(i);
    }

    return vector<int>(ans.begin(), ans.end());
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