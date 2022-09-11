class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int count=1;
        int cur=nums[0],next=nums[0];
        if(next==nums.size()-1) return count;
        for(int i=1;i<nums.size()-1;++i){
            next=max(next,nums[i]+i);
            if(next==nums.size()-1){
                ++count;
                return count;
            }
            if(i==cur){
                cur=next;
                ++count;
            }
           
        }
        
        return count;
    }
};
