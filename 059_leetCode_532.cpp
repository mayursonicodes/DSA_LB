// ! K-diff Pairs in an Array

// todo Brute force method -->

// ------------------------------------------------------------------------------------------------------

// todo 2 poniter approach -->

int findPairs(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;

    int i = 0;
    int j = 1;

    while(j < nums.size()){
        if(nums[j] - nums[i] == target){
            ans.insert({nums[i], nums[j]});
            i++, j++;
        }
        else if(nums[j] - nums[i] > target){
            i++;
        }
        else{
            j++;
        }

        if(i == j){
            j++;
        }
    }
    return ans.size();
}

// ------------------------------------------------------------------------------------------------------

// todo Binary Search -->