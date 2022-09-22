class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),0);
        int m=1;
        dp[0]=1;
        for(int i=1;i<nums.size();++i){
            int t=1;
            for(int j=0;j<i;++j){
                if(nums[j]<nums[i]){
                    t=max(t,dp[j]+1);
                }
            }
            dp[i]=t;
            m=max(m,dp[i]);
        }
        return m;
        
    }
};
