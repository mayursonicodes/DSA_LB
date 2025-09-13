//! String to Integer (atoi)

class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int index = 0;
        int sign = 1;

        //! Skipping all the spaces from the front
        while(s[index] == ' ')
            index++;

        //! Changing sign according to the sign in string s
        if(index < s.length() && (s[index] == '-' || s[index] == '+')){
            sign = s[index] == '-' ? -1 : 1;
            index++;
        }

        //! Storing numbers into the ans
        while(index < s.length() && isdigit(s[index])){
            //! check for overflow
            if(ans > INT_MAX/10 || (ans == INT_MAX/10 && s[index] > '7'))
                return sign == -1 ? INT_MIN : INT_MAX;
            
            ans = ans * 10 + (s[index]-'0');
            index++;
        }

        return ans * sign;
    }
};