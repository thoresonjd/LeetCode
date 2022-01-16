class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            minPrice = prices[i] < minPrice ? prices[i] : minPrice;
            int currentProfit = prices[i] - minPrice;
            maxProfit =  currentProfit > maxProfit ? currentProfit : maxProfit;
        }
        return maxProfit;
    }
};