class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        int size=nums.size();
        int d[size];
        d[0]=nums[0];
        d[1]=max(nums[0],nums[1]);
        
        for(int i=2;i<size;++i){
            d[i]=max(d[i-2]+nums[i],d[i-1]);
        }
        return d[size-1];
    }
};
