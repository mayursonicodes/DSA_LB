// 1 
// 1 2 1 
// 1 2 3 2 1 
// 1 2 3 4 3 2 1 

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter number of row: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < row; col++){
            cout<<col+1<<" ";
        }

        for(int col = row-1; col >= 1; col--){
            cout<<col<<" ";
        }
        cout<<endl;
    }
    return 0;
}