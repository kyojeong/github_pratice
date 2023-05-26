# 120. Triangle
### 解題思路
此為DP問題
1. 先建立一個二維陣列dp大小為size*size
2. 每個dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j]
3. 除了頭跟尾的節點只有一個路徑可以選擇
4. return最下排dp中的最小值
### 複雜度
時間複雜度: O(n^2)
<br>空間複雜度: O(n^2)
