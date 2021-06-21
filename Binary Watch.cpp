class Solution {
public:
    vector<string>res;
    vector<int>temp;
    string time()
    {
        int h=0,m=0;
        string res="";
        for(auto x:temp)
        {
            if(x<=3)
            {
                h+=pow(2,x);
            }
            else
            {
                m+=pow(2,x-4);
            }
        }
        if(h<=11 && m<=59)
        {
            res+=to_string(h)+':';
            if(m<10)
                res+='0';
            res+=to_string(m);
            return res;
        }
        return "";
    }
    void read(int i,int n)
    {
        if(n==0)
        {
            string h=time();
            if(h!="")
               res.push_back(h);
            return;
        }
        for(int j=i;j<10;j++)
        {
            temp.push_back(j);
            read(j+1,n-1);
            temp.pop_back();
        }
    }
    vector<string> readBinaryWatch(int n) 
    {
        read(0,n);
        return res;
    }
};
