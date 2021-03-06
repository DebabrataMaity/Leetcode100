class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;
        ListNode* prev= new ListNode(0);
        ListNode* head = prev;
        while(l1 && l2) {
            if(l1->val <= l2->val) {
                prev->next = l1;
                l1 = l1->next;
            } else {
                prev->next = l2;
                l2 = l2->next;
            }
            prev = prev->next;
    }
    if(l2) prev->next = l2;
    if(l1) prev->next = l1;
    return head->next;
    }
};
