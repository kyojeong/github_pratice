# 657. Robot Return to Origin
### 解題思路
若回到原點代表x,y總共各走0 <br>
1. 設定row=0,col=0
2. 若R則col+1,L則col-1,U則row+1,D則row-1
3. 最後row=0且col=0，則return true
