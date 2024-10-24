#include<iostream>
using namespace std;
#include"Node.cpp"
 Node*reverse(Node*head){
      if(head==NULL){
          return NULL;
      }
      Node*prev = NULL;
      Node*curr =head;
      Node* n = head->next;
      while(curr != NULL){
          n = curr->next;
          curr->next = prev;
          prev = curr;
          curr = n;
      }
      return prev;
  }
    Node *compute(Node *head) {
      if(head == NULL){
          return NULL;
      }
      Node*revhead = reverse(head);
      Node*prev = revhead;
      Node* curr =revhead->next;
      int max = revhead->data;
      while(curr != NULL){
          if(curr->data >= max){
              max = curr->data;
              prev = curr;
          }
          else{
              prev->next = curr->next;
          }
          curr = curr->next;
      }
      Node*anshead = reverse(revhead);
      return anshead;
    }