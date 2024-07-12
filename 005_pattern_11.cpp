// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter number of rows: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        // star
        for(int col = 0; col < rowCount - row; col++){
            cout<<"*";
        }

        // spaces
        for(int col = 0; col < 2*row + 1; col++){
            cout<<" ";
        }

        // star
        for(int col = 0; col < rowCount - row; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row = 0; row < rowCount; row++){
        // star
        for(int col = 0; col < row + 1; col++){
            cout<<"*";
        }

        // space
        for(int col = 0; col < 2*rowCount - 2*row - 1; col++){
            cout<<" ";
        }

        // star
        for(int col = 0; col < row + 1; col++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}