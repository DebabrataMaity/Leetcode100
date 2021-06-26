class Solution {
public:
int jump(vector<int>& v) {
    int n = v.size();
    int cur = 0;
    int mx = 0;
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if(mx < v[i] + i)
        mx = v[i] + i;
        if (i == cur)
        cur = mx, ans++;
    }
    return ans;
}
};
