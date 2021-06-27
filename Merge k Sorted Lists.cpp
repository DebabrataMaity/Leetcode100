class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        unordered_map<int, pair<ListNode*, ListNode*>> m;
        int maxN = INT_MIN, minN = INT_MAX;
        
        for(auto node : lists) {
            while(node) {
                if(!m.count(node->val)){
                    ListNode* head = node;
                    ListNode* tail = node;
                    m[node->val] = {head, tail};
                }
                else {
                    m[node->val].second->next = node;
                    m[node->val].second = node;
                }
                
                maxN = max(maxN, node->val);
                minN = min(minN, node->val);
                node = node->next;
            }
        }
        
        ListNode* head = NULL;
        ListNode* lastTail = NULL;
        for(int i=minN; i<=maxN; i++) {
            if(!m.count(i))
                continue;
            
            auto nodes = m[i];
            if(!head) {
                head = nodes.first;
                lastTail = nodes.second;
            }
            else {
                lastTail->next = nodes.first;
                lastTail = nodes.second;   
            }
        }
        
        if(lastTail) lastTail->next = NULL;
        return head;
    }
};
