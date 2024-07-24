#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <vector <int>> vec(5, vector <int> (3, -8));

    cout<<vec[0].size();
    
    return 0;
}