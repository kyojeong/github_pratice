class Solution {
public:
    vector<int> output;
    vector<int> rightSideView(TreeNode* root) {
        DFS(root,0);
        return output;
    }
    void DFS(TreeNode *root,int level){
        if(!root) return;
        
        if(level >= output.size()){
            output.push_back(root->val);
        }

        DFS(root->right,level+1);
        DFS(root->left,level+1);
    }
};
