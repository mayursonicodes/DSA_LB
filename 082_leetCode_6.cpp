//! Zigzag Conversion

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        int index = 0;
        int ans_row = 0;
        bool direction = 1; //! top to down

        vector<string> ans(numRows);

        while(true){
            if(direction){
                while(index < s.length() && ans_row < numRows){
                    ans[ans_row++].push_back(s[index++]);
                }
                ans_row = numRows - 2;
            }
            else{
                while(index < s.length() && ans_row >=0){
                    ans[ans_row--].push_back(s[index++]);
                }
                ans_row = 1;
            }
            if(index >= s.length())
                break;
            direction = !direction;
        }

        string final_ans = "";
        for(auto i: ans)
            final_ans += i;

        return final_ans;
    }
};