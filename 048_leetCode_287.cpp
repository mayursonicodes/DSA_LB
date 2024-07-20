// ! Sorting method -->
class Solution {
public:
    int findDuplicate(vector<int>& num) {

        sort(num.begin(), num.end());
        for(int i = 0; i < num.size()-1; i++){
            if(num[i] == num[i+1]){
                return num[i];
            }
        }
        return -1;
    }
};

// ! -1 marked method -->
class Solution {
public:
    int findDuplicate(vector<int>& num) {

        int ans = -1;
        for(int i = 0; i < num.size(); i++){
            int index = abs(num[i]);

            // visited
            if(num[index] < 0){
                ans = index;
                break;
            }
            // not visited
            else{
                num[index] *= -1;
            }
        }
        return ans;
    }
};