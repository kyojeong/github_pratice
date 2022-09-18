# 121. Best Time to Buy and Sell Stock
### 解題思路
1. 若prices[i]>prices[sell]，則sell=i
2. 若prices[i]<prices[buy]，則buy=i, sell=i
### 複雜度
時間複雜度：O(n)
