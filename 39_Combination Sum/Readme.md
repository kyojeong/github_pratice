# 39. Combination Sum
### 解題思路
利用DFS
1. 每次檢查sum是否>0，若是則return
2. 每次檢查sum是否=0，若是則加到要輸出的vector
3. 每次都從最後選擇的數字來開始找尋，然後不斷增加子節點
