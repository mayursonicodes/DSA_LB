// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter number of rows: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < row + 1; col++){
            cout<<row+1;
            if(col != row){
                cout<<"*";
            }
        }
        cout<<endl;
    }

    for(int row = 0; row <rowCount; row++){
        for(int col = 0; col < rowCount - row; col++){
            cout<<rowCount - row;
            if(col != rowCount - row - 1){
                cout<<"*";
            }
        }
        
        cout<<endl;
    }
    return 0;
}