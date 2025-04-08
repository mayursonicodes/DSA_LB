//! House Robber
//todo These solutions will be result in TLE as they were not optimzed

//! My Code -->
class Solution {
public:

    int robHelper(vector<int>& nums, int index){
        // Base Case
        if(index >= nums.size())
            return 0;

        // include
        int robbed = nums[index];
        int ans1 = robHelper(nums, index+2);
        robbed += ans1;

        // exclude
        int ans2 = robHelper(nums, index+1);
        
        return max(robbed, ans2);
    }

    int rob(vector<int>& nums) {
        return robHelper(nums, 0);
    }
};

//! Video Code -->
class Solution {
public:

    int robHelper(vector<int>& nums, int index){
        // Base Case
        if(index >= nums.size())
            return 0;

        // include
        int ans1 = nums[index] + robHelper(nums, index+2);
        // exclude
        int ans2 = robHelper(nums, index+1);
        
        return max(ans1, ans2);
    }

    int rob(vector<int>& nums) {
        return robHelper(nums, 0);
    }
};