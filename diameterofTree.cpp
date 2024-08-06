#include<algorithm>
#include"TreeNode2.h"
using namespace std;
int height(TreeNode*root){
    if(root == NULL){
        return 0;
    }
    int ans = 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return 1+std::max(lh, rh);
}
int helper(TreeNode*root , int &diameter){
    if(root==NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    diameter = std::max(diameter, lh+rh);
    helper(root->left , diameter);
    helper(root->right , diameter);
return diameter;
}
// here
int diameterOfBinaryTree(TreeNode* root) {
   int diameter = 0;
   helper(root , diameter);
   return diameter;
}