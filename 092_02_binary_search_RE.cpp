#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int binarySearch(vector<int> vec, int start, int end, int target){
    if(start > end) return -1;

    int mid = (start+end)/2;
    if(vec[mid] == target) return mid;

    if(vec[mid] > target) return binarySearch(vec, start, mid-1, target);
    else return binarySearch(vec, mid+1, end, target);
}

int main(){

    vector<int> vec{10,20,40,60,70,98,99};

    int size = vec.size();    
    int start = 0;
    int end = size - 1;

    int target = 98;

    int ans = binarySearch(vec, start, end, target);
    cout<<ans<<endl;

    return 0;
}