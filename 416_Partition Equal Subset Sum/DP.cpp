class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();++i) sum=sum+nums[i];
        if(sum%2==1) return false;
        
        vector<int> dp(sum+1,0);
        dp[0]=1;
        
        for(int i=0;i<nums.size();++i){
            for(int j=sum;j>=0;--j){
                if(dp[j]==1) dp[j+nums[i]]=1;
            }
            if(dp[sum/2]==1) return true;
        }
        return false;
    }
    
};
