#include<iostream>
using namespace std;
#include"TreeNode2.h"
bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check = false;
        if(p == NULL && q== NULL){
            return true;
        }
        if(p==NULL || q == NULL){
            return false;
        }
       if(p->val == q->val){
        return(isSameTree(p->left, q->left) && isSameTree(p->right , q->right));
       }
      return false;
    }
    

