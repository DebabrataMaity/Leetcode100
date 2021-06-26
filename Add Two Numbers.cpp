class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode;
        ListNode* return_pointer=temp;
        int carr=0;
        int value=0;
        bool flag=0;
        while(l1!=NULL || l2!=NULL){
            flag=0;
            value=0;
            ListNode* temp1=new ListNode();
            if(l1 && l2)
            value=l1->val+l2->val+carr;
            else if(l1)
                value+=l1->val+carr;
            else if(l2)
                value+=l2->val+carr;
            carr=value/10;
            if(carr>0)
                flag=1;
            value=value%10;
            temp1->val=value;
            temp->next=temp1;
            temp=temp->next;
            if(l1)
            l1=l1->next;
            if(l2)
            l2=l2->next;
        }
        if(flag==1){
            ListNode* temp1=new ListNode();
            temp1->val=carr;
            temp->next=temp1;
        }
        return return_pointer->next;
    }
};
