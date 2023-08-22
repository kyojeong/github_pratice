class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int size = prices.size();
        vector<int> zero(size,0),one(size,0);
        
        one[0] = -prices[0];
        for(int i=1;i<size;i++){
            zero[i] = max(zero[i-1],one[i-1]+prices[i]-fee);
            one[i] =  max(one[i-1],zero[i-1]-prices[i]);
        }

        return max(zero[size-1],one[size-1]);
    }
};
