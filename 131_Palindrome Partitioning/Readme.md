# 131. Palindrome Partitioning
### 解題思路
此為DP問題，dp[j][i]指的是字串[j,i]是否為回文
<br> 以ababb為例子
<br> &nbsp; a b a b b
<br>a T F T F F
<br>b   T F T F
<br>a     T F F
<br>b       T T
<br>b         T
1. 當s[i]==s[j]時，若i-j<=2 or dp[j+1][i-1]==true，則dp[j][i]=true
2. 再依照DP找到字串組合
### 複雜度
時間複雜度: O(n^2)
<br>空間複雜度: O(n^2)
