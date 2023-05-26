class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxnum=INT_MIN;
        vector<int> dp(10001,0);
        for(int i=0; i<nums.size();i++){
            maxnum = max(maxnum,nums[i]);
            dp[nums[i]]+=nums[i];
        }

        dp[1] = max(dp[0],dp[1]);
        for(int i=2; i<=maxnum; i++){
            dp[i] = max(dp[i-1],dp[i-2]+dp[i]);
        }
        return dp[maxnum];
    }
   
};
