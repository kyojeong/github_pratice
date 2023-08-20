class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n+1,0);
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            if(i!=n) dp[i] = i;
            for(int j=1; j<i; j++){
                dp[i] = max(dp[i],dp[j]*(i-j));
            }
        }
        return dp[n];
    }
};
