#include<iostream>
using namespace std;
#include"Node.cpp"
Node* helper(int n ,int pre[],char preLN[],int &index){
    if(index >= n){
        return NULL;
    }
    Node* root = new Node(pre[index]);
    index++;
    if(preLN[index-1] =='N'){
        root->left = helper(n,pre,preLN,index);
        root->right = helper(n,pre,preLN,index);
    }
    return root;
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
   int index = 0;
   return helper(n,pre,preLN,index);
}