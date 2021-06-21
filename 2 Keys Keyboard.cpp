class Solution {
public:
	int minSteps(int n) {
		if(n==1)return 0;    
		int p=sqrt(n);
		for(int i=2;i<=p;i++)
        { 
			if(n%i==0)
                return minSteps(n/i)+i;
		}
		return n;
	}
};
