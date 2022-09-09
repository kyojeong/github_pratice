class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int d[cost.size()+1];
        d[0]=cost[0];
        d[1]=cost[1];
        
        for(int i=2;i<cost.size();++i){
            d[i]=min(d[i-2],d[i-1])+cost[i];
        }
        d[cost.size()]=min(d[cost.size()-2],d[cost.size()-1]);
        return d[cost.size()];
    }
};
