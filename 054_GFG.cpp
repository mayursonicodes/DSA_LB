// ! Add two numbers represented by two arrays -->
// ? search on google not on GFG.

#include<iostream>
#include <algorithm>
using namespace std;

string calc_Sum(int *a, int aSize, int *b, int bSize){
    
    string ans;

    int carry = 0;
    int i = aSize - 1;
    int j = bSize - 1;

    while(i >= 0 && j >= 0){
        int x = a[i] + b[j] + carry;
        i-- ,j--;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
    }

    while(i >= 0){
        int x = a[i] + 0 + carry;
        i--;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
    }

    while(j >= 0){
        int x = 0 + b[j] + carry;
        j--;
        int digit = x % 10;
        ans.push_back(digit + '0');
        carry = x / 10;
    }

    if(carry){
        ans.push_back(carry + '0');
    }

    while(ans[ans.size() - 1] == '0'){
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){

    int a[] = {0,9,0,0,3,5};
    int b[] = {2,2,7};

    string result = calc_Sum(a, 6, b, 3);
    cout<<result;
    
    return 0;
}