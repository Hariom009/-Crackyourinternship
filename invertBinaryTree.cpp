 #include<iostream>
 using namespace std;
 #include"TreeNode.h"
 TreeNode* invertTree(TreeNode* root) {
        if(root == NULL){
            return NULL;
        }
         TreeNode* temp;
temp = root->right;
root->right = root->left;
root->left = temp;
invertTree(root->left);
invertTree(root->right);
return root;

    }