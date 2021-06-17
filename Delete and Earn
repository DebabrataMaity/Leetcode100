class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int dp[100001];
        int maximum = -1;
        memset(dp,0, size(dp));
        for(int i = 0; i < nums.size(); i++)
        {
            dp[nums[i]]++;;
            maximum = max(maximum, nums[i]);
        }
        if(nums.size() <= 0)
        {
            return 0;
        }
        for(int i = 2; i <= maximum; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + (dp[i] * i));
        }
        for(int i = 0; i <= maximum; i++)
        {
            cout<<dp[i]<<endl;
        }
        return dp[maximum];
    }
};
