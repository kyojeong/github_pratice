# 983. Minimum Cost For Tickets
### 解題思路
先設定大小為days.back()的dp，若有在days裡面的天，則找尋前1天、前7天、前30天分別哪個方案最便宜
### 複雜度
時間複雜度: O(days.back()*3)
