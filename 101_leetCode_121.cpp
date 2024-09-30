//! Iterative method -->
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0];
        int maxProfit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if (prices[i] < mini) {
                mini = prices[i];
            }
            else {
                maxProfit = max(maxProfit, prices[i] - mini);
            }
        }
        
        return maxProfit;
    }
};

//! Recursive method -->
class Solution {
public:

    void maxprofit_util(vector<int> &prices, int index, int &minPrice, int &maxProfit){
        if(index == prices.size()) return;

        if(prices[index] < minPrice){
            minPrice = prices[index];
        }

        int todayProfit = prices[index] - minPrice;
        if(todayProfit > maxProfit){
            maxProfit = todayProfit;
        }

        maxprofit_util(prices, index+1, minPrice, maxProfit);
    }

    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        maxprofit_util(prices, 0, minPrice, maxProfit);

        return maxProfit;
    }
};