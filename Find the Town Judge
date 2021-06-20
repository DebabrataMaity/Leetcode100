class Solution {
public:
	int findJudge(int n, vector<vector<int>>& t) 
	{
		vector<int> v(n+1,0);

		for(int i = 0; i < t.size(); ++i)
        {
            v[t[i][0]]--; 
            v[t[i][1]]++;
        }
		for(int i = 1; i <= n; ++i) 
            if(v[i] == (n-1)) 
                return i;

		return -1;
	}
};
