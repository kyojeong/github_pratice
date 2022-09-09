# 70. Climbing Stairs
### 解題思路
要走到第n階的話，不是從n-1階走1階上來的，就是從n-2階走2階上來的<br>
所以f(n)=f(n-1)+f(n-2)<br>
但是這題不能用recursive，故用iteration
