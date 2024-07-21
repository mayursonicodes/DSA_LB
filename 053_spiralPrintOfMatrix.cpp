// ! LeetCode 54 -->

#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int> > arr){
    
    vector<int> ans;

    int rowSize = arr.size();
    int colSize = arr[0].size();

    int totalElement = rowSize * colSize;
    int count = 0;

    int startingRow = 0;
    int endingCol = colSize - 1;
    int endingRow = rowSize - 1;
    int startingCol = 0;

    while(totalElement > count){
        for(int i = startingCol; i <= endingCol && totalElement > count; i++){
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        for(int i = startingRow; i <= endingRow && totalElement > count; i++){
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        for(int i = endingCol; i >= startingCol && totalElement > count; i--){
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        for(int i = endingRow; i >= startingRow && totalElement > count; i--){
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return ans;
}

int main(){

    vector<vector<int> > arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    
    vector<int> result = spiralOrder(arr);
    for(auto i: result){
        cout<<i<<" ";
    }

    return 0;
}