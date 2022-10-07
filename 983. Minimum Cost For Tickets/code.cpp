class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(days.back()+1,0);
        int j=0;
        for(int i=1;i<=days.back();++i){
            if(j<days.size()&&i==days[j]){
                ++j;
                dp[i]=min(dp[i-1]+costs[0],dp[i-min(i,7)]+costs[1]);
                dp[i]=min(dp[i],dp[i-min(i,30)]+costs[2]);
            }
            else{
                dp[i]=dp[i-1];
            }
        }
        return dp.back();
    }
};
