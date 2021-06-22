class Solution {
public:
    unordered_set<int> m;
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int, vector<int>> g;
        for(int i = 0 ; i < n; i++) {
            if(leftChild[i] != -1)
                g[i].push_back(leftChild[i]);
            if(rightChild[i] != -1)
                g[i].push_back(rightChild[i]); 
        }
        for(auto node: g) {
            for(auto n1: node.second) {
                m.insert(n1);
            }
        }
        if(m.size() != n-1 ) return 0;
        int root = -1;
        for(int i =0; i < n; i++) {
            if(!m.count(i)) {
                root = i;
                break;
            }
        }
        m.clear();
        queue<int> q;
        q.push(root);
        while(!q.empty()) {
            int qsize = q.size();
            for(int i = 0 ; i < qsize; i++) {
                auto curr = q.front();
                q.pop();
                if(m.count(curr)) return 0;
                    m.insert(curr);
                for(auto node: g[curr])
                    q.push(node);
            }
        }
        return m.size() == n;
    }

};
