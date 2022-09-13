# 948. Bag of Tokens
### 解題思路
1. 先由小排到大，利用sort function
2. 因為score加分要由最小的，而power得到要由最大的，故設定left和right，已得到尚能使用的tokens
3. 若power>tokens[left]，則power--，已獲得score
4. 若power<tokens[left],但score>0，則--score以換得最大的power
5. 若以上兩個都不成立，又或者全部都爬過了，則return
### 複雜度
<br>sort複雜度: O(nlogn)</br>
<br>演算法複雜度: O(n)</br>
<br>total complexity: O(nlogn)</br>
