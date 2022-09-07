class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> start;
        DFS(start,target,0,0,candidates);
        return ans;
    }
    
    void DFS(vector<int> nums,int target,int sum,int now,vector<int> candidates){
        if(sum>target) return;
        
        if(sum==target){
            ans.push_back(nums);
            return;
        }
        
        for(int i=now;i<candidates.size();++i){
            vector<int> temp;
            temp.assign(nums.begin(),nums.end());
            temp.push_back(candidates[i]);
            DFS(temp,target,sum+candidates[i],i,candidates);
        }
    }
};
