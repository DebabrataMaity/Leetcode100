#include<bits/stdc++.h>
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        vector<char> d;
        int maxi=-1;
        for(int i=0;i<s.size();i++)
        {
            if(find(d.begin(), d.end(),s[i])==d.end())
            {
            d.push_back(s[i]);
            }
            else
            {
                auto t=find(d.begin(), d.end(),s[i]);
                t++;
                int x=distance(d.begin(),t);
                //cout<<x<<endl;
                vector<char> v(d);
                d.clear();
                for(int j=x;j<v.size();j++)
                  d.push_back(v[j]);
                d.push_back(s[i]);
            }
            int x=d.size();
            maxi= max(maxi,x);
        }
        return maxi;
    }
