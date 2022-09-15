# 1143. Longest Common Subsequence
### 解題思路
此為DP問題
1. 若text1[j]==text2[i]，則dp[i][j]=dp[i-1][j-1]
2. 其他則看d[i][j-1]和d[i-1][j]哪一個大
### 複雜度
時間複雜度: O(mn)
