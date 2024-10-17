#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    int n = 4;

    vector<vector<int>> board(n, vector<int>(n, 0));
    int col = 0;

    solve(board, col, n);

    return 0;
}