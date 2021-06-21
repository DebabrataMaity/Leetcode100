class Solution {
public:
    int arrangeCoins(int n) {
        long left=0,right=n,k,cur;
        while(left<=right)
        {
            cur=left+(right-left)/2;
            k=cur*(cur+1)/2;
            if(k==n)
                return (int)cur;
            if(n<k)
                right=cur-1;
            else
                left=cur+1;
        }
        return (int)right;
    }
};
