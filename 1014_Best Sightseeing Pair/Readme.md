# 1014. Best Sightseeing Pair
### 解題思路
利用DP
1. 每次分別計算values[left]+values[i]+i-j，若為目前最大則更新max
2. 若values[i]+i > values[left]+left，則left=i
### 複雜度
<p>時間複雜度: O(n) </p>
空間複雜度: O(1)
