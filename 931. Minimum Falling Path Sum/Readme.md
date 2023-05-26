# 931. Minimum Falling Path Sum
### 解題思路
類似於120. Triangle，此為DP問題
1. 建立一個DP大小為size*size
2. dp[i][j] = min( dp[i-1][j-1], dp[i-1][j], dp[i-1][j+1])
3. return最後一排中最小的值
### 複雜度
時間複雜度: O(n^2)
<br>空間複雜度; O(n^2)
