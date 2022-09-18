class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxnum=INT_MIN;
        vector<int> map(10001,0);
        for(int i=0;i<nums.size();++i){
            if(maxnum<nums[i]) maxnum=nums[i];
            map[nums[i]]+=nums[i];
        }
        
        int m=(map[0],map[1]);
        for(int i=2;i<=maxnum;++i){
            map[i]=max(map[i-2]+map[i],map[i-1]);
            m=max(m,map[i]);
        }
        return m;
    }
   
};
