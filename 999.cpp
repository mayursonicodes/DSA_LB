class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = -1;
        int maxiindex = -1;
        int mini = prices[0];
        int miniindex = 0;

        for(int i=1; i<prices.size(); i++){
            if(prices[i] < mini){
                miniindex = i;
                mini = prices[i];
            }
        }

        for(int i = miniindex; i<prices.size(); i++){
            if(prices[i] > maxi){
                maxiindex = i;
                maxi = prices[i];
            }
        }

        if(maxi==-1) return 0;

        int ans = prices[maxiindex] - prices[miniindex];
        return ans;
    }
};