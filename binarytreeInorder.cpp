void helper(BinaryTreeNode<int>*root,vector<int>&t){
    if(root==NULL){
    return;
  }
  if(root->left != NULL){
   // t.push_back(root->left->data);
    helper(root->left,t);
  }
    t.push_back(root->data);
    if(root->right != NULL){
        helper(root->right,t);
    }
  }
vector<int> inorder2(BinaryTreeNode<int>*root){
   vector<int> t;
  helper(root,t);
  return t;
  }
