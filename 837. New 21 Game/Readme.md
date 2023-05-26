# 837. New 21 Game
### 解題思路
此為DP問題
1. if K <= i <= N, then dp[i] = 1. If i > N, then dp[i] = 0
2. dp[i] = sum( dp[i+1] + dp[i+2] + ... + dp[i+maxPts]
3. return dp[0]
<br>Time limit
