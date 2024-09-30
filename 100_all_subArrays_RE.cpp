#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

void printSubArray_util(vector<int> vec, int start, int end){
    if(end >= vec.size()) return;

    for(int i=start; i<=end; i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    printSubArray_util(vec, start, end+1);
}

void printSubArray(vector<int> vec){
    for(int start=0; start<vec.size(); start++){
        int end = start;
        printSubArray_util(vec, start, end);
    }
}

int main(){

    vector<int> vec{1,2,3,4,5};

    printSubArray(vec);

    return 0;
}