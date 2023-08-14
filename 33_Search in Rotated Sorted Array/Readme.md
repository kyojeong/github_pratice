# 33. Search in Rotated Sorted Array
### 解題思路
1. 此題運用Binary Search
2. med = left + (right - left)/2
3. 若在med~right，則搜尋後半段；若在left~med，則搜尋前半段
### 複雜度
時間複雜度: O(logn)
