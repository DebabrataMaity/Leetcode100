class Solution {
public:
    int get(vector<int>&a,int k){
        int ans=0;
        unordered_map<int,int>m;
        int i=0;int j=0;
        while(j<a.size()){
            m[a[j]]++;
            while(i<=j && m.size()>k){
                m[a[i]]--;
                if(m[a[i]]==0){
                    m.erase(a[i]);
                }
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;         
    }
    int subarraysWithKDistinct(vector<int>& a, int k) {
        return get(a,k)-get(a,k-1);
    }
};
