// ! Divide using Binary Search -->
// ?         ____________
// ? divisor | dividend | quiotent
// ?           reminder
// todo quiotent * divisor <= dividend

#include<iostream>
#include<vector>
using namespace std;

int divideUsingBinarySearch(int divisor, int dividend){

    int start = 0;
    int end = abs(dividend);
    int mid = start + (end - start) / 2;

    int ans = 0;

    while(start <= end){
        if(mid * abs(divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        else if(mid * abs(divisor) > abs(dividend)){
            end = mid - 1;
        }
        else{
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    if((divisor > 0 && dividend > 0) || (divisor < 0 && dividend < 0))
        return ans;
    else
        return -ans;
}

int main(){

    cout<<divideUsingBinarySearch(4, -16)<<endl;
    cout<<divideUsingBinarySearch(-1, -2147483648)<<endl;
    cout<<divideUsingBinarySearch(7, -22);

    // ! precision left
    // ! leet code
    
    return 0;
}