  vector<int>ans;
    void pre(TreeNode* root){
        if(root){
          ans.push_back(root->val);
          pre(root->left);
          pre(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        pre(root);
        return ans;
    }