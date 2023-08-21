class Solution {
public:
    int output=0;
    int findTargetSumWays(vector<int>& nums, int target) {
        vector<unordered_map<int, int>> dp(nums.size()+1);
        dp[0][0] = 1;
        for(int i=0;i<nums.size();i++){
            for(auto &a: dp[i]){
                int sum = a.first;
                int count = a.second;
                dp[i+1][sum+nums[i]] += count;
                dp[i+1][sum-nums[i]] += count;

            }
        }
        return dp[nums.size()][target];

    }
    
};
