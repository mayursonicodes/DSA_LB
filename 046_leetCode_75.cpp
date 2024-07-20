// ! Also known as 0,1,2 sort -->

class Solution {
public:
    void sortColors(vector<int>& num) {

        int zero;
        int one;
        int two;
        zero=one=two=0;

        for(int i = 0; i < num.size(); i++){
            if(num[i] == 0)
                zero++;
            else if(num[i] == 1)
                one++;
            else
                two++;
        }

        int i = 0;
        while(zero--){
            num[i] = 0;
            i++;
        }
        while(one--){
            num[i] = 1;
            i++;
        }
        while(two--){
            num[i] = 2;
            i++;
        }
    }
};

// ! Main answer -->
class Solution {
public:
    void sortColors(vector<int>& num) {

        int start = 0;
        int mid = 0;
        int last = num.size() - 1;

        while(mid <= last){
            if(num[mid] == 0){
                swap(num[mid], num[start]);
                start++;
                mid++;
            }
            else if(num[mid] == 1){
                mid++;
            }
            else{
                swap(num[mid], num[last]);
                last--;
            }
        }
    }
};