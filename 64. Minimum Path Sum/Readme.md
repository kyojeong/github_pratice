# 64. Minimum Path Sum
### 解題思路
此為DP問題
1. 找出每個節點的top & left的節點的value最小
2. dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
### 複雜度
時間複雜度: O(m*n)
<br>空間複雜度: O(m*n)
