class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int size = matrix.size();
        vector<vector<int>> dp(size,vector<int>(size,0));
        for(int i=0; i<size; i++){
            for(int j=0;j<size;j++){
                if(i==0){
                    dp[i][j] = matrix[i][j];
                }
                else if(j==0){
                    dp[i][j] = min(dp[i-1][j],dp[i-1][j+1]) + matrix[i][j];
                }
                else if(j==size-1){
                    dp[i][j] = min(dp[i-1][j],dp[i-1][j-1]) + matrix[i][j];
                }
                else{
                    dp[i][j] = min(dp[i-1][j],dp[i-1][j-1]);
                    dp[i][j] = min(dp[i][j],dp[i-1][j+1]) + matrix[i][j];
                }
            }
        }

        int minnum = dp[size-1][0];
        for(int i=0; i<size; i++){
            minnum = min(minnum,dp[size-1][i]);
        }
        return minnum;
    }
};
