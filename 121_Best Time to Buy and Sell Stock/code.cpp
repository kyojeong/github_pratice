class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2) return 0;
        int left=0,right=1;
        int m=prices[right]-prices[left];
        
        for(int i=1;i<prices.size();++i){
            if(prices[i]>=prices[right]){
                right=i;
                m=max(m,prices[right]-prices[left]);
            }
            if(prices[i]<prices[left]){
                left=i;
                right=i;
            }
        }
        if(m<=0) return 0;
        
        return m;
    }
};
