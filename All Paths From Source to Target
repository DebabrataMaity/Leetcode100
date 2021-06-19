class Solution {
public:
    void helper(vector<vector<int>>& graph, int target, vector<int> &path, vector<vector<int>> &ans) {
        if(path.back() == target) ans.push_back(path);
        for(auto it : graph[path.back()]) {
            path.push_back(it);
            helper(graph, target, path, ans);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> path;
        path.push_back(0);
        helper(graph, graph.size() - 1, path, ans);
        return ans;
    }
    
};
