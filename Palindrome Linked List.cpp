class Solution {
public:
bool isPalindrome(ListNode* head) {
    vector<int> v,v1;
    ListNode *curr=head;
    while(curr)
    {
    v.push_back(curr->val);
    curr=curr->next;
    }
    for(int i=0;i<v.size();i++)
    v1.push_back(v[i]);
    reverse(v1.begin(),v1.end());
    if(v1==v)
    return true;
    return false;
}
};
