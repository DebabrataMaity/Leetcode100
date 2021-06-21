class Solution {
public:
    bool hasAlternatingBits(int n) {
        int binaryNum[32];
        int i = 0;
        while (n > 0)
        {
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        vector<int> ans;
        for (int j = i - 1; j >= 0; j--)
            ans.push_back(binaryNum[j]);
        int f = ans[0];
        for (int i = 1; i < ans.size(); i++)
        {
            if (ans[i] == ans[i - 1])
                return false;
        }
        return true;
    }
};
