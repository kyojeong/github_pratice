class Solution {
public:
    string ans="";
    string tree2str(TreeNode* root) {
        change(root);
        return ans;
    }
    void change(TreeNode* root){
        if(!root) return;
        
        string temp(to_string(root->val));
        ans=ans+temp;
        
        if(root->left || root->right){
            ans=ans+"(";
            change(root->left);
            ans=ans+")";
        }
        
        if(root->right){
            ans=ans+"(";
            change(root->right);
            ans=ans+")";
        }
        return;
    }
};
