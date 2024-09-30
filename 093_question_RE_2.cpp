//! cut into segments

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int solve(int rod, int x, int y, int z){
    if(rod == 0) return 0;
    if(rod < 0) return INT16_MIN;

    int ans1 = solve(rod-x, x, y, z) + 1;
    int ans2 = solve(rod-y, x, y, z) + 1;
    int ans3 = solve(rod-z, x, y, z) + 1;

    int ans = max(ans1, max(ans2, ans3));
    return ans;
}

int main(){

    int rod = 7;
    int x = 5;
    int y = 2;
    int z = 2;

    int ans = solve(rod, x, y, z);

    if(ans < 0) ans = 0;

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}