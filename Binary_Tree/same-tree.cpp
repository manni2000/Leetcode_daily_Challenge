 bool ans=true;

    void func(TreeNode* p, TreeNode* q){
    if(p && q) {
        if(p->val!=q->val){ ans=false; }

       func(p->left, q->left);
       func(p->right,q->right);
    }
       if(p!=NULL && q==NULL){ ans=false; }

       if(p==NULL && q!=NULL) { ans=false; }
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
       func(p,q);
       return ans;
    }