class Solution {
public:
    double new21Game(int n, int k, int maxPts) {
        if(k==0) return 1;
        vector<float> dp(k+maxPts,0);
        for(int i=k;i<=n;i++){
            dp[i] = 1;
        }

        for(int i=(k-1);i>=0;i--){
            for(int j=1;j<=maxPts;j++){
                dp[i] += dp[i+j];
            }
            dp[i] = dp[i] / maxPts;
        }
        return dp[0];
    }
};
