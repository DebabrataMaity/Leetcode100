class Solution{
public:
int uniquePathsWithObstacles(vector<vector<int>>&a){
int m=a.size();
int n=a[0].size();
if(a[0][0]==1)
    return 0;
a[0][0]=1;
for(int i=1;i<m;i++)
{
    if(a[i][0]==1)
        a[i][0]=0;
    else
        a[i][0]=a[i-1][0];
}
for(int i=1;i<n;i++)
{
    if(a[0][i]==1)
        a[0][i]=0;
    else
        a[0][i]=a[0][i-1];
}
for(int i=1;i<m;i++)
{
    for(int j=1;j<n;j++)
    {
    if(a[i][j]==1)
        a[i][j]=0;
    else
        a[i][j]=a[i-1][j]+a[i][j-1];
    }
}
return a[m-1][n-1];
}
};
