#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

int main(){

    int arr[] = {4,5,6,7};
    int *p = (arr+1); // point to 5

    cout<<*arr+9; // 4+9

    return 0;
}