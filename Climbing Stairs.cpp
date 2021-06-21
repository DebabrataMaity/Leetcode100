class Solution {
    public int climbStairs(int n) {
        if(n <= 3)
            return n;
         int a = 2;
         int b = 3;
         int sum =0;
        for(int i=4; i<=n ;i++){
            sum = a+b;
            a=b;
            b=sum;
        }
        return sum;
    }
}
