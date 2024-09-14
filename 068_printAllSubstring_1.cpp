// ! Print all the substring from a string -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

vector<string> subString(string name){
    vector<string> subTexts;

    for(int i = 0; i < name.length(); i++){
        for(int j = i + 1; j <= name.length(); j++){
            subTexts.push_back(name.substr(i, j-i));
            // ! substr(starting_Position, number_of_elements)
        }
    }
    return subTexts;
}

int main(){

    string name = "abcd";
    vector<string> name2 = subString(name);
    for(auto i: name2){
        cout<<i<<endl;
    }
    
    return 0;
}