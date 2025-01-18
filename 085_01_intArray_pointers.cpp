#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[] = {52,145,78,136,2};
    int *ptr = arr; //! for array pointer don't use &
    // int *ptr = &arr[2]; //! in this use &
    cout<<ptr<<endl<<endl;

    // ! Important
    cout<<"All are same base address"<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<&arr[0]<<endl<<endl;

    cout<<arr+2<<endl<<endl; //! increase address by 2 not value

    cout<<arr[0]<<endl;
    cout<<*arr<<endl;
    cout<<0[arr]<<endl;

    cout<<arr[1]<<endl; //! converted into *(arr+1)
    cout<<*(arr+1)<<endl;
    cout<<1[arr]; //! converted into *(1+arr)
    
    return 0;
}