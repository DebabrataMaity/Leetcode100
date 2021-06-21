#define ll long long int
class Solution {
public:
    string longestPalindrome(string s) {
        string v="";
      if ( s.length() < 1) return "";
      //if(s.size()==1)return s;
    int start = 0, end = 0;
    for (int i = 0; i < s.length(); i++) {
        int len1 = fun(s, i, i);
        int len2 =fun(s, i, i + 1);
        int len = max(len1, len2);
        if (len > (end - start)) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    //cout<<s.length()<<endl;
        //cout<<start<<" "<<end;
        for(ll i=start;i<=end;i++)
            v.push_back(s[i]);
    return v;
    }
    ll fun(string s,int left,int right)
    {
         int L = left, R = right;
        if(s=="\0" || left>right)return 0;
    while (L >= 0 && R < s.length() && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
    }
};
