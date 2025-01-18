// ! For char array pointer, cout behaviour is different

#include<iostream>
#include<vector>
using namespace std;

int main(){

    char ch[10] = "MayurSoni";
    char *c = ch;
    cout<<c<<endl<<endl; //! Instead of ch address it will print whole string

    cout<<ch<<endl;
    cout<<&ch<<endl;
    cout<<ch[0]<<endl;
    
    cout<<&c<<endl;
    cout<<*c<<endl; //! converted into *(c+0)
    cout<<c<<endl<<endl;

    cout<<c+5<<endl<<endl; //! start from 5 to end

    char chch = 'k';
    char *cptr = &chch;
    cout<<cptr<<endl<<endl; //! print some garbage value along with k as we don't have '\0'

    char *temp = "Babber"; //? BAD practice
    cout<<temp<<endl;

    return 0;
}