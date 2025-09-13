//! String Compression

class Solution {
public:
    int compress(vector<char>& s) {
        int ans_index = 0;
        char previous = s[0];
        int count = 1;

        for(int i=1; i<s.size(); i++){
            if(previous == s[i])
                count++;
            else{
                s[ans_index++] = previous;
                previous = s[i];
                if(count > 1){
                    int start = ans_index;
                    while(count){
                        s[ans_index++] = (count%10) + '0'; //! converts int to char
                        count/=10;
                    }
                    reverse(s.begin()+start, s.begin()+ans_index); //! converts like (21 to 12)
                    count = 1;
                }
            }
        }

        //! for the last iteration
        s[ans_index++] = previous;
        if(count > 1){
            int start = ans_index;
            while(count){
                s[ans_index++] = (count%10) + '0';
                count/=10;
            }
            reverse(s.begin()+start, s.begin()+ans_index);
        }

        return ans_index; //! index start from 0 so ans_index
    }
};