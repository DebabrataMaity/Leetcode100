class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n=nums.size();
    vector<vector<int>>res;
    do {
            vector<int>v;
            for (int i = 0; i < n; i++) 
            {
                v.push_back(nums[i]);
            }
            res.push_back(v);
       }while (next_permutation(nums.begin(), nums.end()));
    return res;
}
};
