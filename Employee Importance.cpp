class Solution {
public:
    unordered_map<int, Employee*> A;
    int dfs(int id)
    {
        Employee* e = A[id];
        int total = e->importance;
        for(auto subs: e->subordinates)
            total+=dfs(subs);
        return total;
    }
    int getImportance(vector<Employee*> employees, int id) {
        for(auto e:employees)
            A[e->id] = e;
        return dfs(id);
    }
};
