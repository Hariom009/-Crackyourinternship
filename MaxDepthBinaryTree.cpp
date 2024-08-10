#include<iostream>
using namespace std;
#include<BinaryTreeNode.h>
int depth(BinaryTreeNode<int>*root){
    if(root == NULL){
        return 0;
    }
    int k  =0;
   // int p = 0;
    if(root != NULL){
        k++;
    }
    k = max(depth(root->right), depth(root->left));
    return k+1;
}