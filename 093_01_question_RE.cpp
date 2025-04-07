//! Important Pattern
//! minimun numbers of elements required to reach target sum
//! elements in array should be greater than 0 as an input
//! elements can be used infinite times as required

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int solve(vector<int> &vec, int target){
    if(target == 0)
        return 0;

    if(target < 0)
        return INT16_MAX;

    int mini = INT16_MAX;
    for(int i=0; i<vec.size(); i++){
        int ans = solve(vec, target - vec[i]);
        if(ans != INT16_MAX) //! check if the answer is valid or not
            mini = min(mini, ans+1);
    }

    return mini;
}

int main(){

    vector<int> vec{1,2};
    int target = 5;
    
    cout<<solve(vec, target);

    return 0;
}