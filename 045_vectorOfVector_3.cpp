// ! Vector of Vector -->

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector <vector <int>> vec;

    vector <int> a{1,2,3};
    vector <int> b{4,5,6,7,8};
    vector <int> c{9,10};

    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);


    cout<<"Sizes of row of vector: "<<endl;
    cout<<vec[0].size()<<endl;
    cout<<vec[1].size()<<endl;
    cout<<vec[2].size()<<endl;

    cout<<endl<<"Traverse of Vector of Vector: "<<endl;
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size(); j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}