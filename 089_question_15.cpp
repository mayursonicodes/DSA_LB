#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    char st[] = "ABCD";
    for(int i=0; st[i] != '\0'; i++){
        cout<<st[i]<<" "<<*(st)+i<<" "<<*(i+st)<<" "<<i[st];
        //! *(st)+i and *st+i are paritally different
        cout<<endl;
    }

    return 0;
}