class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        if(strs.size()==0) return prefix;
        string s = strs[0];
        int i = 0;
        while(i<s.size()){
            for(int j=1;j<strs.size();j++){
                if(s[i]==strs[j][i]) continue;
                else return prefix;
            }
            prefix += s[i];
            i++;
        }
        return prefix;
    }
};
