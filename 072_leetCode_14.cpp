//! Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true){
            char current_char = 0;

            for(auto word: strs){
                if(i >= word.length())
                    return ans;
                else if(current_char == 0)
                    current_char = word[i];
                else if(word[i] != current_char)
                    return ans;
            }
            
            ans.push_back(current_char);
            current_char = 0;
            i++;
        }
        return ans;
    }
    
    // string longestCommonPrefix(vector<string>& strs) {
    //     string ans;
    //     int i=0;
    //     while(true){
    //         char current_char = strs[0][i];

    //         for(auto word: strs){
    //             if(i >= word.length())
    //                 return ans;
    //             else if(word[i] != current_char)
    //                 return ans;
    //         }
            
    //         ans.push_back(current_char);
    //         i++;
    //     }
    //     return ans;
    // }
};