// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter the number of rows: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        // For spaces
        for(int col = 0; col < row; col++){
            cout<<" ";
        }

        // For stars
        for(int col = 0; col < rowCount - row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}