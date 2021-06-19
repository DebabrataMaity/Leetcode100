class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        vector<vector<int>> a(n);
        for(vector<int> i : roads){
            a[i[0]].push_back(i[1]);
            a[i[1]].push_back(i[0]);
        }
        int res = 0;
        for(int i = 0;i<n - 1;i++){
            for(int j = i + 1;j<n;j++){
                int sum = 0;
                if(find(a[i].begin(), a[i].end(), j) != a[i].end()){
                    sum -= 1;
                }
                sum += a[i].size() + a[j].size();
                res = max(res, sum);
            }
        }
        return res;
    }
};
