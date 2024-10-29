#include<iostream>
using namespace std;
#include<vector>
#include<queue>
#include"TreeNode.cpp"
    vector<vector<int>> levelOrder(TreeNode* root) {
        //2D vector banaya
        vector<vector<int>> res;

        if(root == NULL){
            return res;
        }
        //Is Algo ka naam - BFS
        //Ek queue bnao
      queue<TreeNode*> pending;
      pending.push(root);
      //Root push kro
      while(pending.size() != 0){
        int levelsize = pending.size();
        //Ek temp 1d vector lo
     vector<int>level;
     // Traverse kro us level k liye aur saare element daal do is temp vector me
        for(int i =0;i<levelsize;i++){
            TreeNode*front = pending.front();
            pending.pop();
         level.push_back(front->val);
         //Agle level k saare element push krdo ki while loop se bahar na aaye
        if(front->left) pending.push(front->left);
        if(front->right) pending.push(front->right);
        
        }
        //Us temp vector ko 2d vector me push krdo
        res.push_back(level);
      }
      return res;
    }
