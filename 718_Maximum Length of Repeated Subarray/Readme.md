# 718. Maximum Length of Repeated Subarray
### 解題思路
此為DP問題
1. 建立一個dp[m][n]
2. 若nums[i]==nums[j]，則dp[i][j]=dp[i-1][j-1]+1
### 複雜度
時間複雜度: O(mn)
