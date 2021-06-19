class Solution {
public:
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1)
        {
            vector<int> ans;
            ans.push_back(0);
            return ans;
        }
        unordered_map<int, int> m;
        int no_edges = edges.size();
        for(int i=0; i<no_edges; i++)
        {
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }
        queue<int> Q;
        for(int i=0; i<n; i++)
        {
            if(m[i]==1)
                Q.push(i);
        }
        while(n>2)
        {
            int qs = Q.size();
            n-=qs;
            for(int i=0; i<qs;i++)
            {
                int t = Q.front();
                Q.pop();
                for(int j=0; j<no_edges; j++)
                {
                    if(edges[j][0]==t)
                    {
                        m[edges[j][1]]--;
                        if(m[edges[j][1]]==1)
                            Q.push(edges[j][1]);
                    }
                    else {
                        if(edges[j][1]==t)
                        {
                            m[edges[j][0]]--;
                            if(m[edges[j][0]]==1)
                                Q.push(edges[j][0]);
                        }
                    }
                }
            }
        }
        vector<int> ans;
        while(!Q.empty())
        {
            ans.push_back(Q.front());
            Q.pop();
        }
        return ans;
            
    }
};
