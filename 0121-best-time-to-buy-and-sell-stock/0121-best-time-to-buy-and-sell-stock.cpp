class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0], maxProfit = 0, currentProfit;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice)
                minPrice = prices[i];
            currentProfit = prices[i] - minPrice;
            if (currentProfit > maxProfit)
                maxProfit = currentProfit;
        }

        return maxProfit;
    }
};