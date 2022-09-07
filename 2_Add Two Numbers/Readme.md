# 2. Add Two Numbers
### 解題思路
1. 讓l2的值加到l1上
2. 若val>=10，則進位到下一個node
3. 若l1有next，l2沒有next，則新增加一個node給l2，使長度相等，反之亦然
4. 直到l1和l2都沒有next為止
