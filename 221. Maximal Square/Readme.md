# 221. Maximal Square
### 解題思路
此為DP問題
1. 建立DP大小為m*n，由上至小，由左至右探索
2. dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + matrix[i][j]，以獲得此節點最大可獲得的正方形邊長
3. return minnum*minnum(最大邊長的平方)
### 複雜度
時間複雜度: O(m*n)
<br>空間複雜度: O(m*n)
