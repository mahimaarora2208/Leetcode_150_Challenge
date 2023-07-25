class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for(int R = 1; R < prices.size(); R++){
            if(prices[R-1] < prices[R]){
                maxProfit += (prices[R] - prices[R-1]);
            }
        }
        return maxProfit;
    }
};