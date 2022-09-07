# 22. Generate Parentheses
### 解題思路
可以發現'('一定大於等於')'的數量，但兩個最多都只有n個<br>
1. 若left<=right，則下一個必為'('
2. 剩下就分別加上'('和')'
3. 若left=n，則剩下就由right補到n
4. 直到left跟right接等於n，則回傳到vector上
