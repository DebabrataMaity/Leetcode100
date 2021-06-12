class Solution {
public:
    int sum(int r1,int r2,int c1, int c2,int mat[101][101])
    {
        int sum=0;
        for(int i=r1;i<=r2;i++)
        {
            for(int j=c1;j<=c2;j++)
            {
                sum=sum+mat[i][j];
            }
        }
        return sum;
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        int c = mat[0].size();
        if(r==0)
            return mat;
        if(c==0)
            return mat;
        vector<vector<int>> dp(r, vector<int>(c, 0));
        int t[101][101];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                t[i][j]=mat[i][j];
        int r1,r2,c1,c2;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                r1=i-k;
                r2=i+k;
                c1=j-k;
                c2=j+k;
                if(r1<0)
                    r1=0;
                if(r2<0)
                    r2=0;
                if(c1<0)
                    c1=0;
                if(c2<0)
                    c2=0;
                if(r1>=r)
                    r1=r-1;
                if(r2>=r)
                    r2=r-1;
                if(c1>=c)
                    c1=c-1;
                if(c2>=c)
                    c2=c-1;
               dp[i][j]=sum(r1,r2,c1,c2,t);
            }
        }
        return dp;
    }
};
