class Solution{
public:
int find(vector<int>& nums,int sum)
{
int n=nums.size();
int dp[n+1][sum+1];
for(int i=0;i<=n;i++)
{
    for(int j=0;j<=sum;j++)
    {
    if(i==0)
        dp[i][j]=0;
    if(j==0)
        dp[i][j]=1;
    }
}
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=sum;j++)
    {
        if(nums[i-1]==0)
            dp[i][j]=dp[i-1][j];
        else if(nums[i-1]<=j)
            dp[i][j]=dp[i-1][j-nums[i-1]]+dp[i-1][j];
        else
            dp[i][j]=dp[i-1][j];
    }
}
    return dp[n][sum];
}
int findTargetSumWays(vector<int>& nums,int S)
{
int sum=0,leftsum,cnt=0;
for(int i=0;i<nums.size();i++)
{
    sum=sum+nums[i];
    if(nums[i]==0)
        cnt=cnt+1;
}
if(S>sum)
    return 0;
if((S+sum)&1)
    return 0;
else
{
    leftsum=(S+sum)/2;
int res=find(nums,leftsum);
return pow(2,cnt)*res;
}
}
};
