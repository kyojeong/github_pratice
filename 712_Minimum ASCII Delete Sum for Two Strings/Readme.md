# 712. Minimum ASCII Delete Sum for Two Strings
### 解題思路
1. 若s1[i-1] == s2[j-2]，則dp[i][j] = dp[i-1][j-1]
2. 其餘的dp[i][j] = min(dp[i-1][j]+int(s1[i-1]),dp[i][j-1]+int(s2[j-1]));
### 複雜度
時間複雜度: O(n^2)
<br> 空間複雜度: O(n^2)
