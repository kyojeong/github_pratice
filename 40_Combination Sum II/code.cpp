class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>k;
        DFS(k,0,-1,target,candidates);
        return ans;

    }
    void DFS(vector<int> vec,int sum,int now,int target,vector<int> candidates){
        if(sum==target){
            ans.push_back(vec);
            return;
        }
        else if(sum>target){
            return;
        }
        
        for(int i=now+1;i<candidates.size();++i){
            if(i>(now+1)&&candidates[i]==candidates[i-1]) continue;
            vector<int>temp;
            temp.assign(vec.begin(),vec.end());
            temp.push_back(candidates[i]);
            DFS(temp,sum+candidates[i],i,target,candidates);
        }
    }
};
