class Solution {
public:

ListNode *removeNthFromEnd(ListNode *head, int k)
{
   ListNode * prev = nullptr;
    ListNode * slow = head;
    ListNode * fast = head;
    
    for(int i=0; i<k; i++)
        fast = fast->next;
    while( fast !=NULL)
    {
        prev = slow;
        fast = fast->next;
        slow = slow->next;
    }
    if(slow== head) return head->next;
    prev -> next = prev->next->next;
    
    return head;
}
};
