//! inline is generally used when function defination is small (it can be used in big defination also but it will not effective and take more space)
//! flow control will not transfer to function instead function will come itself to main
//! take less space than normal function 

#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

inline void numberShow(int num){
    cout<<num<<endl;
    cout<<num*2<<endl;
}

int main(){

    numberShow(5);
    numberShow(5);
    numberShow(5);
    numberShow(5);
    numberShow(5);
    numberShow(5);
    numberShow(5);
    numberShow(5);

    return 0;
}