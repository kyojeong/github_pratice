# 153. Find Minimum in Rotated Sorted Array
### 解題思路
1. 此為Binary Search的問題
2. 需找到med是小於med-1
3. 若在med~right之間，則搜尋後半段；若在left~med之間，則搜尋前半段
### 複雜度
時間複雜度: O(logn)
