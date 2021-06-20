class Solution {
public:
    bool helper(bool vis[], bool dfsvis[], int i, vector<int> adj[])
    {
        vis[i] = true;
        dfsvis[i] = true;
        for(auto n : adj[i])
        {
            if(!vis[n])
            {
                if(helper(vis, dfsvis, n, adj))
                    return true;
            }
            else if(dfsvis[n])
                return true;
        }
        dfsvis[i] = false;
        return false;
    }
    bool canFinish(int no, vector<vector<int>>& pre) {
        vector<int> adj[no];
        for(vector <int> v : pre)
            adj[v[0]].push_back(v[1]);
        bool vis[no];
        bool dfsvis[no];
        memset(vis, false, sizeof(vis));
        memset(dfsvis, false, sizeof(dfsvis));
        for(int i = 0 ; i < no; i++)
        {
            if(helper(vis, dfsvis, i, adj))
                return false;
        }
        return true;
    }
};
