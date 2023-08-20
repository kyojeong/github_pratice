class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        vector<int> buy(size,0),sell(size,0),cool(size,0);

        buy[0] = -prices[0];
        for(int i=1; i<size; i++){
            buy[i] = max(buy[i-1],cool[i-1]-prices[i]);
            sell[i] = max(sell[i-1],buy[i-1]+prices[i]);
            cool[i] = sell[i-1];
        }

        return max(sell[size-1],cool[size-1]);
    }
};
