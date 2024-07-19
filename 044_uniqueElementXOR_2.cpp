// ! Unique element using XOR -->

#include<iostream>
#include<vector>
using namespace std;

void getElement(vector <int> &arr){
    cout<<"Enter the elements: ";
    for(int i = 0; i < arr.size(); i++){
        cin>>arr[i];
    }
}

int checkUnique(vector <int> &arr){
    int ans = 0;
    for(int i = 0; i < arr.size(); i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector <int> arr(n);
    getElement(arr);

    cout<<checkUnique(arr);

    return 0;
}