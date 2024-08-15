  ListNode* reverseList(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
ListNode* store = head;
        ListNode* curr = head;
        ListNode* pre = NULL;
        ListNode* n = head->next;
       // ListNode* temp = next;
        while(curr != NULL){
           n = curr->next;
           curr->next = pre;
           pre = curr;
           curr = n;
        }
       // head->next = NULL;
       return pre;
    }
