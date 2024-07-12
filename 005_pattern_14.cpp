// A 
// A B A 
// A B C B A 
// A B C D C B A

#include<iostream>
using namespace std;

int main(){
    int rowCount;

    cout<<"Enter number of row: ";
    cin>>rowCount;

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < row; col++){
            char ch = 'A' + col;
            cout<<ch<<" ";
        }

        for(int col = row-1; col >= 1; col--){
            char ch = 'A' + col - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    return 0;
}