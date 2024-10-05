//! Mostly asked in every interview

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool isSafe(int srcx, int srcy, int row, int col, int arr[][3], vector<vector<bool>> &visited){
    if(((srcx >= 0 && srcx < row) && (srcy >=0 && srcy < col)) && (arr[srcx][srcy] == 1) && (visited[srcx][srcy] == false))
        return true;
    else
        return false;
}

// srcx/srcy --> x/y position of source
void solveMaze(int arr[3][3], int row, int col, int srcx, int srcy, vector<vector<bool>> &visited, vector<string> &path, string output){
    if(srcx == row-1 && srcy == col-1){
        path.push_back(output);
        return;
    }

    // Down -> i+1, j
    if(isSafe(srcx+1, srcy, row, col, arr, visited)){
        visited[srcx+1][srcy] = true;
        solveMaze(arr, row, col, srcx+1, srcy, visited, path, output+'D');
        //! Backtracking
        visited[srcx+1][srcy] = false;
    }

    // Left -> i, j-1
    if(isSafe(srcx, srcy-1, row, col, arr, visited)){
        visited[srcx][srcy-1] = true;
        solveMaze(arr, row, col, srcx, srcy-1, visited, path, output+'L');
        //! Backtracking
        visited[srcx][srcy-1] = false;
    }

    // Right -> i, j+1
    if(isSafe(srcx, srcy+1, row, col, arr, visited)){
        visited[srcx][srcy+1] = true;
        solveMaze(arr, row, col, srcx, srcy+1, visited, path, output+'R');
        //! Backtracking
        visited[srcx][srcy+1] = false;
    }
    
    // Up -> i-1, j
    if(isSafe(srcx-1, srcy, row, col, arr, visited)){
        visited[srcx-1][srcy] = true;
        solveMaze(arr, row, col, srcx-1, srcy, visited, path, output+'U');
        //! Backtracking
        visited[srcx-1][srcy] = false;
    }
}

int main(){

    int maze[3][3] = {{1,0,0},
                      {1,1,0},
                      {1,1,1}};

    if(maze[0][0] == 0){
        cout<<"No path exists"<<endl;
        return 0;
    }
            
    int row = 3;
    int col = 3;

    vector<vector<bool>> visited(row, vector<bool>(col, false));
    visited[0][0] = true;

    vector<string> path;
    
    string output = "";

    solveMaze(maze, row, col, 0,0, visited, path, output);

    if(path.size() == 0)
        cout<<"No direct path exist"<<endl;

    for(auto i: path){
        cout<<i<<" ";
    }

    return 0;
}