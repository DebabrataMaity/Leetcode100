class Solution {
    const int UNVISITED = -1;
    public:
    bool isBipartite(vector<vector<int>>& graph) {
        queue<int> q;
        int n = graph.size();
        vector<int> colors = vector<int>(n, UNVISITED);
        for (int i = 0; i < n; ++i)
        {
            if (colors[i] == UNVISITED) 
            {
                q.push(i); 
                colors[i] = 0;
                while (!q.empty())
                {
                    int curr = q.front(); q.pop();
                    for (int neighbor : graph[curr])
                    {
                        if (colors[neighbor] == UNVISITED)
                        {
                            q.push(neighbor); 
                            colors[neighbor] = !colors[curr];
                        } 
                        else if (colors[neighbor] == colors[curr]) 
                            return false;
                    }
                }
            }
        }
        return true;
    }
};
