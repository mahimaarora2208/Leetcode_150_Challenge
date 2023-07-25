class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int L = 0;
      int maxProfit = 0;
      for(int R = 1; R < prices.size(); R++){

        if (prices[L] < prices[R]){
          maxProfit = max(prices[R] - prices[L],maxProfit);
          
        }
        else{
         L = R;
        }
      }
    return maxProfit;
    }
};
