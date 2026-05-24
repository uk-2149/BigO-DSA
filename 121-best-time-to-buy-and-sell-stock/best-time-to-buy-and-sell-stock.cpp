class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mx_profit = 0;
        int curr_min = INT_MAX;
        for(int i=0; i<n; i++) {
            curr_min = min(curr_min, prices[i]);
            mx_profit = max(mx_profit, prices[i]-curr_min);
        }
        return mx_profit;
    }
};