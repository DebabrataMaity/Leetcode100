class Solution {
public:
    int findLengthOfList(ListNode * head){
        int length = 0;
        while(head){
            length++;
            head = head->next;
        }
        return length;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
			
        int length = findLengthOfList(head);
        k = k % length;
        k = length - k;
        if(k == length)
            return head;

        ListNode * curr = head;
        while(k > 1){
            k--;
            curr = curr->next;
        }
        
        ListNode * tmp = curr->next;
        curr->next = NULL;
        curr = tmp;

        while(curr->next)
            curr = curr->next;
        curr->next = head;

        head = tmp;
        
        return head;
    }
};
