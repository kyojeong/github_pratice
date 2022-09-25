class Solution {
public:
    bool canPartition(vector<int>& nums) {
        bool result=false;
        DFS(nums,0,0,result);
        return result;
    }
    void DFS(vector<int> nums,int sum,int i,bool &result){
        if(i==nums.size()){
            if(sum==0) result=true;
            return;
        }
        DFS(nums,sum+nums[i],i+1,result);
        DFS(nums,sum-nums[i],i+1,result);
    }
};
