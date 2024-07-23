// ! Square root using binary search -->

#include<iostream>
#include<vector>
using namespace std;

int sqrt(int number){
    
    int start = 0;
    int end = number;
    int mid = start + (end - start) / 2;

    int ans;

    while(start <= end){
        if(mid * mid == number){
            return mid;
        }
        else if(mid * mid > number){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid +1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){

    int number = 16;    
    int result = sqrt(number);
    
    int precision = 3;
    float step = 0.1;
    float finalAns = result;

    for(int i = 0; i < precision; i++){
        for(float j = finalAns; j*j <= number; j+=step){
            finalAns = j;
        }
        finalAns -= step;
        step /= 10;
    }

    cout<<finalAns;

    return 0;
}
