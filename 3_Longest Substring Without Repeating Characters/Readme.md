# 3. Longest Substring Without Repeating Characters
### 解題思路
1. 設定left=0,right=0
2. 若left=right，則right+1
3. 每次都會檢查right position的值是否在(left,right-1)之間有出現過
4. 若發現有出現過，則left=(出現過的位置)+1；若沒有，則right+1
5. 直到right>=string.length()
