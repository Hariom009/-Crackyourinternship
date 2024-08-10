#include<iostream>
using namespace std;
#include"BinaryTreeNode.h"
bool helper(BinaryTreeNode<int>*l, BinaryTreeNode<int>*r){
    if(l == NULL && r== NULL){
        return true;
    }
    if(l==NULL || r== NULL){
        return false;
    }
    if(l->data == r->data){
        return helper(l->left, r->right) && helper(l->right, r->left);
    }
    return false;
}
    bool isSymmetric(BinaryTreeNode<int>* root) {
        if(root==NULL){
            return true;
        }
      if(root != NULL){
      return helper(root->left, root->right);
      }
      return false;
    }