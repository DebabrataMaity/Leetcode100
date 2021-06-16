class Solution {
public:
    int longestPalindrome(string s) {
        //cout<<s.size();
        if(s.size()==0)
            return 0;
        else if(s.size()==1)
            return 1;
        int f=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                f=1;
            }
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        { 
            cout<<s.size();
            return s.size();
            return 0;
        }
        map<char,int> m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int c=0;
        int flag=0;
        map<char , int >::iterator itr;
        for(itr=m.begin();itr!=m.end();itr++)
        {
            if(itr->second%2==0 && itr->second>0)
                c+=itr->second;
            if(itr->second%2!=0 && itr->second>1)
            {
                c+=(itr->second-1);
                flag=1;
            }
            if(itr->second==1)
                flag=1;
        }
        if(flag==1)
        c=c+1;
        return c;
    }
};
