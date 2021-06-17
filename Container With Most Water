class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxi=0;
        int a;
        while(l<r)
        {
            a=((min(height[l],height[r]))*(r-l));
            maxi=max(maxi,a);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxi;
        
        
    }
};
