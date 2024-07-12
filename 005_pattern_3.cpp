// *
// * *
// * * *
// * * * *
// * * * * *

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter number of rows: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < row + 1; col++){
            cout<<"* ";
            // cout<<row;
        }
        cout<<endl;
    }
    return 0;
}