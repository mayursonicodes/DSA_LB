// ! Strings -->

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    // ! Important function
    // string name = "Mayur Soni";

    // cout<<"First name is "<<name.substr(0, 5)<<endl;
    // cout<<"Second name is "<<name.substr(6)<<endl;
    //todo ------------------------------------------------------------------------------------------------------------

    // string s1 = "aacd"; //! -1 for shorter
    // string s2 = "abcd";

    // string s1 = "abcdefghijkl";
    // string s2 = "abcd";

    // cout<<s1.compare(s2);
    // cout<<s1.compare(0,2,s2);
    //! 0 for equal
    //! <0 if s1 is smaller and unmatched
    //! >0 if s1 is larger and unmatched
    //todo ------------------------------------------------------------------------------------------------------------
    
    // string s1 = "Mayur";
    
    // cout<<s1<<endl;
    // s1.push_back('S'); //! Add one char at a time, append or '+=' is use for adding a string
    // s1.push_back('o');
    // cout<<s1<<endl;
    // s1.pop_back();
    // cout<<s1<<endl;
    //todo ------------------------------------------------------------------------------------------------------------
    
    //! npos = “not found” or “till the end”
    //todo ------------------------------------------------------------------------------------------------------------
    
    // string s1 = "Hello my name is Mayur Soni";
    // int pos = s1.find("lo");
    
    // if(pos != string::npos)
    //     cout << "Found at index: " << pos << endl;
    // else
    //     cout << "Not found" << endl;
    
    // cout<<s1.find('m', 9);
    //todo ------------------------------------------------------------------------------------------------------------
    
    // string s = "I love Java";
    // s.replace(7, 4, "C++");
    // cout << s << endl;
    //todo ------------------------------------------------------------------------------------------------------------

    string s = "Hello World";
    s.erase(5);
    cout<<s<<endl;
    s.erase(2,2);
    cout<<s<<endl;

    return 0;
}