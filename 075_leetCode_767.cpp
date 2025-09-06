//! Reorganize String
//todo We can also use map but hash map array is recommended in these types of questions

class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};

        for(auto i: s){
            hash[i - 'a']++;
        }

        char max_freq_char;
        int max_freq = INT_MIN;        
        for(int i=0; i<sizeof(hash)/sizeof(int); i++){
            if(max_freq < hash[i]){
                max_freq_char = i + 'a';
                max_freq = hash[i];
            }
        }

        int index = 0;
        while(max_freq && index<s.length()){
            s[index] = max_freq_char;
            index += 2;
            max_freq--;
        }

        if(max_freq != 0)
            return "";
        else
            hash[max_freq_char - 'a'] = 0;

        for(int i=0; i<sizeof(hash)/sizeof(int); i++){
            while(hash[i] > 0){
                index = index>=s.length() ? 1 : index;
                s[index] = i+'a';
                hash[i]--;
                index += 2;
            }
        }
        return s;
    }
};