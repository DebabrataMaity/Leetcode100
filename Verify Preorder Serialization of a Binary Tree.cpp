class Solution {
public:
    bool isValidSerialization(string preorder) {
        int cnt = 1, i = 0;
        for (i=0; i < preorder.size() && cnt > 0;) {
            if (preorder[i] == '#')
                cnt--;
            else 
                cnt++;
            while (i < preorder.size() && preorder[i++] != ',');
        }
        return cnt == 0 && i == preorder.size();
    }
};
