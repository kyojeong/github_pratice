class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int size = triangle.size();
        vector<vector<int>> dp(size,vector<int>(size,0));

        dp[0][0] = triangle[0][0];
        for(int i=1;i<size;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    dp[i][j] = dp[i-1][j]+triangle[i][j];
                }
                else if(j==i){
                    dp[i][j] = dp[i-1][j-1]+triangle[i][j];
                }
                else{
                    dp[i][j] = min(dp[i-1][j-1],dp[i-1][j]) + +triangle[i][j];
                }
            }
        }
        
        int minnum = dp[size-1][0];
        for(int i=1;i<size;i++){
            minnum = min(minnum,dp[size-1][i]);
        }
        return minnum;
    }
};
