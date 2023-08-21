class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp(amount+1,0);
        dp[0] = 1;
        for(int i=0;i<coins.size();i++){
            int num = coins[i];
            for(int j=num; j<=amount;j++){
                dp[j] = dp[j] + dp[j-num];
            }
        }
        return dp[amount];
    }
};
