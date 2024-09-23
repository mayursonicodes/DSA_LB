// ! return True or False

// #include<iostream>
// #include<vector>
// #include<string.h>
// using namespace std;

// bool stringFind(string name, int size, char find, int index){
//     if(index >= size) return false;

//     if(name[index] == find) return true;

//     return stringFind(name, size, find, index+1);    
// }

// int main(){

//     string name = "Mayur Soni";
//     int size = name.length();
//     char find = 'l';
//     int index = 0;

//     cout<<stringFind(name, size, find, index);

//     return 0;
// }

// ! return index number

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int stringFind(string name, int size, char find, int index){
    if(index >= size) return -1;

    if(name[index] == find) return index;

    return stringFind(name, size, find, index+1);    
}

int main(){

    string name = "Mayur Soni";
    int size = name.length();
    char find = 'r';
    int index = 0;

    cout<<stringFind(name, size, find, index);

    return 0;
}