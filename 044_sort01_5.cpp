// ! Sort 0,1 given in an array/vector -->

#include<iostream>
#include<vector>
using namespace std;

void printVector(vector <int> &ans){
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}

int main(){

    vector <int> arr{1,1,0,0};
    // vector <int> arr{0,1,0,0,1,0,0,1,0,1,0,0,1};

    int start = 0;
    int end = arr.size() - 1;
    int pivot = 0;

    while(start < end){
        if(arr[pivot] == 0){
            start++;
            pivot++;
        }
        else{
            swap(arr[pivot], arr[end]);
            end--;
        }
    }
    
    printVector(arr);

    return 0;
}