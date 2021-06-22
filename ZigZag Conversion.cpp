class Solution {
public:
	string convert(string s, int numRows)
	{
		vector<string> vect(numRows+1);
		int count=1;
		int flag=0;
		if(numRows==1)
			return s;
		for(int i=0;i<s.size();i++){
			vect[count].push_back(s[i]);
			if(flag==0 )
				count++;
			else 
				count--;
			if(count==numRows)
			{
				flag=1;
			}
			else if(count==1)
			{
				flag=0;
			}
		}
		string ans;
		for(int i=1;i<=numRows;i++){
			ans+=vect[i];
		}
		return ans;
		}
	};
