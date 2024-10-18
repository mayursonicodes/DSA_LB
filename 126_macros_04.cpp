#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

//! MACRO --> It does not take any space in memory. It just replace PI with 3.14
#define PI 3.14

#define MAXX(x, y) (x>y ? x : y)

float circleArea(float r){
    return PI * r * r;
}

float circlePerimeter(float r){
    return 2 * PI * r;
}

int big(){
    int a = 55;
    int b = 45;
    return MAXX(a, b);
}

int main(){

    cout<<circleArea(5)<<endl;
    cout<<circlePerimeter(5)<<endl;

    cout<<big();

    return 0;
}