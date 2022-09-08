class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
    vector<int> ans;
    void inorder(TreeNode *root){
        if(root==NULL) return;
        if(root->left!=NULL) 
            inorder(root->left);
        ans.push_back(root->val);
        if(root->right!=NULL)
            inorder(root->right);
    }
};
