class Solution {
public:
    int myAtoi(string s) {
        int i=0,ret=0;
        bool sign=false;
        while(s[i]==' ')i++;
        if(s[i]=='-'||s[i]=='+')
        {
            sign=s[i]=='-'?true:false;
            i++;
        }
        while(s[i]>='0'&&s[i]<='9')
        {
            if(ret>214748364||(ret==214748364 && s[i]>'7'))return sign?-2147483648:2147483647;
            ret=10*ret+(s[i]-'0');
            i++;
        }
        return sign?-ret:ret;        
    }
};
