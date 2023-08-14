class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return DFS(root,LONG_MIN,LONG_MAX);
    }
    bool DFS(TreeNode *root,long min_val,long max_val){
        if(!root) return true;
        if(root->val<=min_val || root->val>=max_val) return false;

        return DFS(root->left,min_val,root->val) && DFS(root->right,root->val,max_val);
    }
};
