#include<iostream>
using namespace std;
#include"Node.cpp"
Node*helper(int pre[],int size, int &index, int ubound){
       if (index == size || pre[index] > ubound) 
            return NULL;
Node* root = new Node(pre[index++]);
       root->left = helper(pre,size,index,root->data);
       root->right = helper(pre,size,index,ubound);
       return root;
    }
    // Function that constructs BST from its preorder traversal.
    Node* Bst(int pre[], int size) {
    
     int index = 0;
    return helper(pre,size,index,INT_MAX);
    }