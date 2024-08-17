int len(ListNode* head){
    int count = 0;
    if(head==NULL){
        return 0;
    }
    while(head != NULL){
        head = head->next;
        count++;
    }
    return count;
}
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return true;
        }
        ListNode * temp = head;
        int l = len(head);
        int mid = (l-1)/2;
        while(mid--){
            temp = temp->next;
        }
        ListNode*pre = NULL;
        ListNode*curr = temp->next;
        ListNode*next;
        while(curr != NULL){
        next = curr->next;
         curr->next = pre;
         pre = curr;
         curr = next;
        }
        ListNode*first = head;
        ListNode* second = pre;
        while(second != NULL){
            if(first->val != second->val){
                return false;
            }
            first = first->next;
            second = second ->next;
        }
        return true;
    }
