//! Add Strings

class Solution {
public:
    void findSum(string& num1, int num1Size, string& num2, int num2Size, int carry, string &ans){
        // base case
        if(num1Size<0 && num2Size<0){
            if(carry != 0){
                ans.push_back(carry + '0');
                return;
            }
            return;
        }

        int n1 = (num1Size>=0 ? num1[num1Size] : '0') - '0';
        int n2 = (num2Size>=0 ? num2[num2Size] : '0') - '0';
        int sum = n1 + n2 + carry;
        int digit = sum%10;
        carry = sum/10;

        ans.push_back(digit + '0');
        findSum(num1, --num1Size, num2, --num2Size, carry, ans);
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        findSum(num1, num1.size()-1, num2, num2.size()-1, 0, ans);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};