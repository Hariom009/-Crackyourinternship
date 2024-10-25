ListNode* reverse(ListNode* head){
     ListNode* prev = NULL;
     ListNode* curr = head;
     ListNode* n = head->next;
     while(curr != NULL){
        n = curr->next;
        curr->next = prev;
        prev = curr;
        curr = n;
     }
     return prev;
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*L1 =reverse(l1);
        ListNode* L2 = reverse(l2);
        ListNode* ans = new ListNode();
        int sum = 0, carry = 0;
        while(L1 != NULL || L2 != NULL){
            if(L1 != NULL){
                sum += L1->val;
                L1= L1->next;
            }
            if(L2 != NULL){
                sum += L2->val;
                L2 = L2->next;
            }
            ans->val = sum%10;
            carry = sum/10;
            ListNode* newNode = new ListNode(carry);
            newNode->next = ans;
            ans = newNode;
            sum = carry;
        }
        if(carry == 0){
        return ans->next;
        }
        return ans;
    }