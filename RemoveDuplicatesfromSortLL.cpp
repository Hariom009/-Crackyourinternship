ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        ListNode*temp = head;
       while(temp->next != NULL && temp != NULL){
        if(temp->val == temp->next->val){
            ListNode* a = temp->next;
            temp->next = a->next;
            delete a;
        }
        else{
        temp= temp->next;
        }
       }
        return head;
    }
