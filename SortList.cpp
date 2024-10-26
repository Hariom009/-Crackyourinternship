#include<iostream>
using namespace std;
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if( list2 == NULL){
            return list1;
            }
        ListNode* head = NULL;
        if(list1->val < list2->val){
            head = list1;
                head->next = mergeTwoLists(list1->next,list2);
        }
      else {
                head = list2;
                head->next = mergeTwoLists(list1,list2->next);
        }
        return head;
    }
ListNode* midlist(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;
    }
    return slow;
}
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* mid = midlist(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
        ListNode* lefthead =sortList(left);
        ListNode* righthead = sortList(right);
        return mergeTwoLists(lefthead,righthead);
    }