class Solution {
    public:
        int maxProfit(vector<int>& prices)
        {
            int maxC = 0, maxT = 0;
            for (int i = 1;i < prices.size(); ++i)
            {
                maxC = max(0, maxC += prices[i] - prices[i-1]);
                maxT = max(maxC, maxT);
            }
            return maxT;
        }
};
