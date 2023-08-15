# 516. Longest Palindromic Subsequence
### 解題思路
1. dp[i][j]等於是字串從i~j中的最長回文字串
2. 若i==j，則dp[i][j]=1
3. 若s[i]==s[j]，則dp[i][j] = dp[i+1][j-1]
4. 剩下的dp[i][j] = max(dp[i+1][j],dp[i][j-1])
### 複雜度
時間複雜度：O(n^2)
<br>空間複雜度：O(n^2)
