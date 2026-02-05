# 18. 4Sum
### 解題思路
此為Two Pointer問題
1. 可參考15.3Sum的解題思路,只是變成雙迴圈的形式
2. 先訂好i跟j,left=j+1,right=length-1
3. 若sum==target則輸出且left+1&&right-1,若sum<target則left+1,若sum>target則right-1
### 複雜度
時間複雜度: O(n^3)
