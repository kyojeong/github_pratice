# 238. Product of Array Except Self
### 解題思路
1. 要找出有幾個0
2. 若沒有0,則output[i] = (全部數字乘積) / (自己)
3. 若出現一個0,則除了nums[i]==0之外,output[i]都是0
4. 若出現兩個以上0,則output[i]全部是0
### 複雜度
時間複雜度: O(n)
