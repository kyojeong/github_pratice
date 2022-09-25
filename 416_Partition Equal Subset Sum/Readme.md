# 416. Partition Equal Subset Sum
### 解題思路
<p>這題一開始想到可以用DFS，但發現time exceed，因此改用DP</p>
<p>DFS: 可以想成背包問題，取或不取，就是每個數字都可加或減，只要最後sum==0則true</p>
DP: 
1. 可以先找出所有的sum，因為若分為兩群，則兩個子集合的sum皆為sum/2
2. 若sum為奇數，則必不可能成立，其他則只要找到任取數有sum/2這個值出現
3. 所以建個dp陣列初始化dp[0]=1，每次取一個數，若dp[i]==1，則dp[i+num]=1，直到出現dp[sum/2]==1

### 複雜度
<p>時間複雜度</p>
<p>DFS: O(2^n)</p>
<p>DP: O(n*sum)</p>
<p>空間複雜度</p>
<p>DFS: O(1)</p>
<p>DP: O(sum)</p>
