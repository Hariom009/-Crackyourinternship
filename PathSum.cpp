#include<iostream>
using namespace std;
#include"BinaryTreeNode.h"
bool hasPathSum(BinaryTreeNode<int>* root, int targetSum) {
       if(root == NULL){
            return false;
      return true;
       }
        if(root->left == NULL && root->right == NULL){
            if(root->data == targetSum){
                return true;
            }
        }
        int sum = targetSum - root->data;
        return(root->left && hasPathSum(root->left , sum)) ||
               (root->right && hasPathSum(root->right, sum));
      // return(hasPathSum(root->left,targetSum)) && (hasPathSum(root->right,targetSum));
        
    }
    int main(){
     //   
    }