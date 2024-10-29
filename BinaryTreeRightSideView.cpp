#include<iostream>
using namespace std;
 vector<int> rightSideView(TreeNode* root) {
        vector<int>res;

        if(root == NULL){
            return res;
        }
      queue<TreeNode*>pending;
      pending.push(root);
      while(pending.size() != 0){
        int levelsize = pending.size();
         TreeNode*rightmost = NULL;

        for(int i =0;i<levelsize;i++){

         TreeNode* front = pending.front();
        pending.pop();
        rightmost = front;
        if(front->left ) pending.push(front->left);
        if(front->right) pending.push(front->right);
        }
        if(rightmost) res.push_back(rightmost->val);
      }
      return res;
    }