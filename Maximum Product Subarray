class Solution {
public:
int maxProduct(vector<int>& nums) {

    int n = nums.size();
    int p = 1,p1 = 1;
    int res = INT_MIN;
    for(int i = 0;i<n;i++){
        p = p*nums[i];
        p1 = p1*nums[n-i-1];
        
        res = max(res,max(p,p1));
        
        
        if(p==0){
           p=1;
        }
        if(p1==0){
            p1=1;
        }
    }
    return res;
}
};
