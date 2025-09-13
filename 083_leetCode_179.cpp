//! String sorting is different (lexographical sorting)

class Solution {
public:
    static bool custom_sort(string &a, string &b){
        string s1 = a+b;
        string s2 = b+a;
        return s1 > s2; //! if true, return 'a' else 'b'
    }

    string largestNumber(vector<int>& nums) {
        vector<string> snums;

        for(auto &i: nums)
            snums.push_back(to_string(i));
        
        sort(snums.begin(), snums.end(), custom_sort);

        //! if first element after desc sort is '0' means whole vector is of '0'
        if(snums[0] == "0") 
            return "0";

        string ans = "";
        for(auto &i: snums)
            ans += i;
        
        return ans;
    }
};