class Solution {
public:
    string reverseWords(string s) {
        int c=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==' ')
                c++;
        }
        cout<<c;
        vector<string>ss(c+2);
        vector<string>sss(c+2);
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                ss[j].push_back(s[i]);
            else if(s[i]==' ' && s[i+1]!=' ')
                j++;
        }
        //for(int i=0;i<ss.size();i++)
         //   cout<<ss[i]<<" ";
        for(int i=ss.size()-1;i>=0;i--)
        {
            //if(ss[i]!=" ")
            //{
                sss.push_back(ss[i]+" ");
            //}
        }
        string ssss="";
        for(int i=0;i<sss.size();i++)
        {
            if(sss[i]!=" ")
                ssss+=sss[i];
        }
        //cout<<1;
        ssss.pop_back();
        return ssss;
    }
};
