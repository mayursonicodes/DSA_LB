// ! Climbing Stairs -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int climbStairs(int n) {
    if(n == 0 || n == 1)
        return 1;

    return climbStairs(n-1) + climbStairs(n-2);
}

int main(){

    int n;
    cout<<"Enter your stair: ";
    cin>>n;

    cout<<climbStairs(n);

    return 0;
}