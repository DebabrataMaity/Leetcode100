class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        vector<int>fff=nums;
        for(int i=0;i<l.size();i++)
        {
            nums=fff;
            bool gg=false;
            int vv=l[i] , hg=r[i]+1;
            sort(nums.begin()+vv,nums.begin()+hg);
            for(int j=l[i]+1;j<r[i] && j<nums.size();j++)
            {
                if(nums[j]-nums[j-1]!=nums[j+1]-nums[j])
                {
                    gg=true;
                    break;
                }
            }
            if(gg==true)
            {
                ans.push_back(false);
            }
            else
            {
                ans.push_back(true);
            }
        }
        return ans;
    }
};
