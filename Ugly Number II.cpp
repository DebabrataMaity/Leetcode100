class Solution {
public:
    int nthUglyNumber(int n) {
        
        set<long long> st;
        if(n==1) return 1; 
        st.insert(1);
        int cnt=0;
        while(cnt<n){
            long long elm=*st.begin();
            st.erase(elm);
            cnt++;
           if(cnt==n) return elm;
            long long a=2*elm;
            long long b=3*elm;
            long long c=5*elm;

    
            st.insert(a);
            st.insert(b);
            st.insert(c);
        
        }
        return 1;
        
    }
};
