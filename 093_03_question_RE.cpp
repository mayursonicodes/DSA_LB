//! max sum of non adjacent elements
//! use inclusion exclusion approach

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void solve(vector<int> &vec, int index, int sum, int &maxi){
    if(index >= vec.size()){
        maxi = max(sum, maxi);
        return;
    }

    //! include
    solve(vec, index+2, sum+vec[index], maxi);

    //! exclude
    solve(vec, index+1, sum, maxi);
}

int main(){

    vector<int> vec{2,1,4,9};

    int sum = 0;
    int maxi = INT16_MIN;
    int index = 0;

    solve(vec, index, sum, maxi);

    cout<<maxi<<endl;

    return 0;
}