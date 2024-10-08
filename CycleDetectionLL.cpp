   bool hasCycle(ListNode *head) {
        if(head == NULL){
            return false;
        }
     ListNode* slow = head;
     ListNode* fast = head->next;
     while(fast != NULL && fast->next != NULL){
        if(slow == fast ){
            return true;
        }
        slow = slow->next;
        fast = fast->next->next;
     }
     return false;
    }
