class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        int first=money(0,nums.size()-2,nums);
        int end=money(1,nums.size()-1,nums);
        return max(first,end);
    }
    int money(int begin,int end,vector<int> nums){
        int d[end-begin+1];
        d[0]=nums[begin];
        d[1]=max(nums[begin],nums[begin+1]);
        
        for(int i=2;i<(end-begin+1);++i){
            d[i]=max(d[i-2]+nums[begin+i],d[i-1]);
        }
        return d[end-begin];
        
    }
};
