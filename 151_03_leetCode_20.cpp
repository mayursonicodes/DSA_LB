//! Valid Parenthesis

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(int i=0; i<s.length(); i++){
            char bracket = s[i];

            //! Checking for opening bracket
            if(bracket == '(' || bracket == '{' || bracket == '['){
                st.push(bracket);
            }
            //! Checking for closing bracket
            else{
                if(st.empty()) return false;
                else{
                    if(bracket == ')' && st.top() == '(')
                        st.pop();
                    else if(bracket == '}' && st.top() == '{')
                        st.pop();
                    else if(bracket == ']' && st.top() == '[')
                        st.pop();
                    else
                        return false;
                }
            }
        }
        if(st.empty())
            return true;
        else
            return false;
    }
};