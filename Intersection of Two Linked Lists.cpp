class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        ListNode* ptr = headA;
        ListNode *p, *q;
        while(ptr != NULL)
        {
            lenA++;
            ptr = ptr->next;
        }
        ptr = headB;
        while(ptr != NULL)
        {
            lenB++;
            ptr = ptr->next;
        }
        
        if(lenA >= lenB)
        {
            p = headA, q = headB;
            int diff = lenA-lenB;
            while(diff)
            {
                p = p->next;
                diff--;
            }
        }
        else {
            p = headB, q = headA;
            int diff = lenB-lenA;
            while(diff) {
                p = p->next;
                diff--;
            }
        }
        while(p != NULL && q != NULL && p != q)
        {
            p = p->next;
            q = q->next;
        }

        if(p == NULL || q == NULL) 
            return NULL;
        else 
            return p;
    }
};
