class Solution {
public:
    int divide(int dividend, int divisor) {
        long long sum=0,i;
        if(divisor==1 && dividend !=0)
            return dividend;
        if(divisor==-1 && dividend==-2147483648)
            return 2147483647;
         if(divisor==-1 && dividend<0)
            return abs(dividend);
        if(divisor==-1 && dividend!=0)
            return -(dividend);
        for(i=1;i<abs(dividend);i++)
        {
            sum=sum+abs(divisor);
            if(sum>abs(dividend))
                break;
        }
        if(divisor<0 && dividend<0)
            return (i-1);
        if(divisor<0 || dividend<0)
            return -(i-1);
        else
            return i-1;
    }
};
