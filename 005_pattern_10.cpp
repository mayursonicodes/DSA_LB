//     *
//    * *
//   *   *
//  *     *
// *       *
// *       *
//  *     *
//   *   *
//    * *
//     *

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter number of rows: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        // For spaces
        for(int col = 0; col < rowCount - row - 1; col++){
            cout<<" ";
        }
        
        // For stars
        for(int col = 0; col < 2*row+1; col++){
            if(col == 0 || col == 2*row){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    for(int row = 0; row < rowCount; row++){
        // For spaces
        for(int col = 0; col < row; col++){
            cout<<" ";
        }
        
        // For stars
        for(int col = 0; col < 2*rowCount - 2*row - 1; col++){
            if(col == 0 || col == 2*rowCount - 2*row - 2){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}