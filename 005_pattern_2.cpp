// * * * * * * * * 
// *             *
// *             *
// *             *
// * * * * * * * *

#include<iostream>
using namespace std;

int main(){
    int rowCount;
    int colCount;

    cout<<"Enter number of rows: ";
    cin>>rowCount;
    cout<<"Enter number of column: ";
    cin>>colCount;

    for(int row = 0; row < rowCount; row++){
        if(row == 0 || row == rowCount-1){
            for(int col = 0; col < colCount; col++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int col = 0; col < colCount-2; col++){
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}