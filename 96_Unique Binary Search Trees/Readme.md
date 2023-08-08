# 96. Unique Binary Search Trees
### Binary Search Tree
左邊的子節點皆小於根節點，右邊的子節點皆大於根節點
### 解題思路
1. 以n=3為例，先以1當root，則left沒有node，right有2個node；再以2為root，則left有1個node，right有1個node；再以3為root，則left有2個node，right沒有node
2. dp[i] = dp[0]*dp[i-1] + dp[1]*dp[i-2] + dp[2]*dp[i-3] + ... + dp[i-1]*dp[0]
### 複雜度
時間複雜度: O(n^2)
<br> 空間複雜度: O(n)
