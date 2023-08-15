class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        int size = pairs.size();
        vector<int> dp(size,0);
        dp[0] = 1;
        int m=1;

        for(int i=1;i<size;i++){
            dp[i] = 1;
            for(int j=0;j<i;j++){
                if(pairs[j][1] < pairs[i][0]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            m = max(m,dp[i]);
        }

        return m;
    }
};
