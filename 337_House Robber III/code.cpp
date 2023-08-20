class Solution {
public:
    int rob(TreeNode* root) {
        DFS(root);
        return root->val;
        
    }
    void DFS(TreeNode *root){
        if(root->left) DFS(root->left);
        if(root->right) DFS(root->right);

        int leaf = 0;
        int now = root->val;
        if(root->left) {
            leaf += root->left->val;
            if(root->left->left) now += root->left->left->val;
            if(root->left->right) now += root->left->right->val;
        }
        if(root->right) {
            leaf += root->right->val;
            if(root->right->left) now += root->right->left->val;
            if(root->right->right) now += root->right->right->val;
        }
        root->val = max(now,leaf);
    }
};
