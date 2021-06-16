class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        int result=0;
        int i;
        //0* present 0 show (0 or more than 0 times)
        for(i=0;i<s.size()-1;)
        {
            //not 4 or 9
            if(m[s[i]]>=m[s[i+1]])
            {
                result+=m[s[i]];
                i+=1;
            }
            //4 or 9 shows
            else{
                result=result+m[s[i+1]]-m[s[i]];
                i+=2;
            }
            cout<<result<<"\n";
        }
        if(i<s.size())
            result+=m[s[i]];
        return result;
    }
};
