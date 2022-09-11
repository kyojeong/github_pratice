class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int jump=0;
        for(int i=0;i<size;++i){
            jump=max(jump,nums[i]+i);
            if(jump>=size-1) return true;
            if(jump==i) return false;
        }
        return false;
    }
};
