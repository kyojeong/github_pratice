# 746. Min Cost Climbing Stairs
### 解題思路
第i階是 第i-1階走1step or 第i-2階走2step<br>
故只要從i-1階和i-2階中挑選出最小的cost，再加上自己的cost，即可得到自己的總cost
