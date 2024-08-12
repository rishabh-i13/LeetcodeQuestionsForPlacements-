class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=INT_MIN;
        int minval=prices[0];

        for(int i=0;i<prices.size();i++){
            int currprofit=prices[i]-minval;
            max_profit=max(max_profit,currprofit);
            minval=min(minval,prices[i]);
        }

        return max_profit;
    }
};