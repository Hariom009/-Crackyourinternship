int size(ListNode*head){
    if(head == NULL){
        return 0;
    }
    int count = 0;
    while(head != NULL){
     head = head->next;
     count++;
    }
    return count;
}
    ListNode* middleNode(ListNode* head) {
        if(head == NULL){
            return NULL;
        }
        int s = size(head);
        int  middle = (s)/2;
        ListNode* temp = head;
       while(middle != 0){
        temp = temp->next;
        middle--;
        }
       return temp;
    }
