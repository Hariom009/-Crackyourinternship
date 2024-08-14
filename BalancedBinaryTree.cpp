int maxDepth(TreeNode* root) {
          if(root == NULL){
        return 0;
    }
    int k  =0;
    if(root != NULL){
        k++;
    }
    k = max(maxDepth(root->right), maxDepth(root->left));
    return k+1;
    }
bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
    int d1 = maxDepth(root->left);
    int d2 = maxDepth(root->right);
   if(d1-1 >d2 || d2-1>d1){
    return false;
   }
if(isBalanced(root->left) && isBalanced(root->right)){
    return true;
}
return false;
    }
