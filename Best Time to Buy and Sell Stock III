class Solution {
public:
    int maxProfit(vector<int>& a) {
        int buy1=INT_MAX;
        int buy2=INT_MAX;
        int p1=0;
        int p2=0;
        for(int i=0;i<a.size();i++)
        {
            buy1=min(buy1,a[i]);
            p1=max(p1,a[i]-buy1);
            buy2=min(buy2,a[i]-p1);
            p2=max(p2,a[i]-buy2);
        }
        return p2;
    }
};
