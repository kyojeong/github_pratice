class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int> high(nums.size(),0);
        vector<int> low(nums.size(),0);
        high[0]=nums[0];
        low[0]=nums[0];
        int highest=nums[0];
        
        for(int i=1;i<nums.size();++i){
            high[i]=max(high[i-1]*nums[i],nums[i]);
            high[i]=max(low[i-1]*nums[i],high[i]);
            low[i]=min(high[i-1]*nums[i],nums[i]);
            low[i]=min(low[i-1]*nums[i],low[i]);
            highest=max(high[i],highest);
        }
        
        return highest;
        
    }
};
