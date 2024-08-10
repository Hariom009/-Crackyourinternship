 #include<iostream>
 using namespace std;
 #include"BinaryTreeNode.h"
 bool helper(BinaryTreeNode<int>*l , BinaryTreeNode<int>*r){
     if(l==NULL && r==NULL){
        return true;
    }
    if(l==NULL || r==NULL){
        return false;
    }
    if(l->data == r->data){
        return helper(l->left, r->left) && helper(l->right , r->right);
    }
    return false;
}
 bool isSubtree(BinaryTreeNode<int>* root, BinaryTreeNode<int>* subroot){
    if(subroot==NULL){
        return true;
    }
    if(root==NULL ){
        return false;
    }
    if(root->data==subroot->data && helper(root,subroot)){
        return true;
    }
    return isSubtree(root->left,subroot)|| isSubtree(root->right,subroot);
}