class Solution {
public:
    int strStr(string haystack, string needle) {
    int haystack_len = haystack.size();
    int needle_len = needle.size();
    int flag;
    cout<<(haystack_len-needle_len+1)<<endl;
        cout<<(haystack.size()-needle.size()+1);
    if(needle.size()==0)
        return 0;
    
    for (int i=0; i<(haystack_len-needle_len+1); i++){
        if(haystack[i]==needle[0]){
            flag = 1;
            for(int j=1;j<needle_len;j++){
                if(haystack[i+j]!=needle[j])
                    flag = 0;
            }
            if(flag==1)
                return i;
        }
    }
    
    return -1;
    }
};
