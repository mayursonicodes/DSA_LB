#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <vector <int>> vec(5, vector <int> (3, -8));

    cout<<endl<<"Traverse of Vector of Vector: "<<endl;
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"Enter the value: ";
    cin>>vec[2][1];
    cout<<vec[2][1];
    
    cout<<endl<<endl<<"Traverse of Vector of Vector: "<<endl;
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}