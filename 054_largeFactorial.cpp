// ! Factorial of a large number -->

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> factorial(int N){

    vector<int> ans{1};
    
    int carry = 0;


    for(int i = 2; i <= N; i++){
        for(int j = 0; j < ans.size(); j++){
            int digit = ans[j] * i + carry;
            ans[j] = digit % 10;
            carry = digit / 10;
        }

        while(carry){
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }

        reverse(ans.begin(), ans.end());

        return ans;
}

int main(){
    
    vector<int> result = factorial(952);
    for(auto i: result){
        cout<<i;
    }

    return 0;
}