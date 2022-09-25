# 115. Distinct Subsequences
### 解題思路
此為一個DP問題，記得要用unsigned long
1. 設定一個DP陣列記得各多一行，第一行初始化為1，第一列初始化為0
2. 若s[j-1]==t[i-1]，則dp[i][j]=dp[i-1][j-1]+dp[i][j-1]
3. 其他都是dp[i][j]=dp[i][j-1]
### 複雜度
時間複雜度: O(mn)
空間複雜度: O(mn)
