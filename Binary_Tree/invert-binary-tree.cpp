     struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
    
    void tree(TreeNode* root){
        if(!root) return;
        swap(root->left,root->right);
        tree(root->left);
        tree(root->right);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;
        tree(root);
        return root;
    }