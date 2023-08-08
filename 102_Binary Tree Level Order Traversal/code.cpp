class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> levelOrder(TreeNode* root) {
        BFS(root,0);
        return ans;
    }
    void BFS(TreeNode *root, int level){
        if(root==NULL) return;

        int size=ans.size();
        if(level>(size-1)){
            vector<int>temp;
            temp.push_back(root->val);
            ans.push_back(temp);
        }
        else{
            ans[level].push_back(root->val);
        }
        BFS(root->left,level+1);
        BFS(root->right,level+1);
        return;
    }
};
