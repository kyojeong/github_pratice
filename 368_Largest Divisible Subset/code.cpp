class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        vector<vector<int>> dp;
        int m=0;
        sort(nums.begin(),nums.end());
        vector<int> t={nums[0]};
        dp.push_back(t);
        for(int i=1;i<nums.size();++i){
            vector<int> k;
            for(int j=0;j<i;++j){
                if(nums[i] % dp[j].back() == 0){
                    if(dp[j].size() > k.size()){
                        k.assign(dp[j].begin(),dp[j].end());
                    }
                }
            }
            k.push_back(nums[i]);
            dp.push_back(k);
            if(dp[i].size() > dp[m].size()) m=i;
        }
        
        return dp[m];
    }
};
