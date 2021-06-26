class Solution {
public:
     ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* s;
        int count=0;
        s = head;
        for(int i=0; i<k; i++){
            if(s==NULL)
                return head;
            s = s->next;
        }
        s = head;
        ListNode* p, *q;
        p = NULL; q = NULL;
        while(s && count<k){
            q = s->next;
            s->next = p;
            p = s;
            s = q;
            count++;
        }
        if(s)
            head->next = reverseKGroup(s,k);
        return p;
    }
};
