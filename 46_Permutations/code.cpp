class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> use;
        DFS(use,nums);
        return ans;
    }
    
    void DFS(vector<int> use,vector<int> unuse){
        if(unuse.empty()){
            ans.push_back(use);
            return;
        }
        
        for(int i=0;i<unuse.size();++i){
            vector<int> temp;
            temp.assign(use.begin(),use.end());
            temp.push_back(unuse[i]);
            vector<int> temp2;
            temp2.assign(unuse.begin(),unuse.end());
            temp2.erase(temp2.begin()+i);
            DFS(temp,temp2);
        }
    }
};
