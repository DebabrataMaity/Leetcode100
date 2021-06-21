class Solution{
    public:
vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        int ele1=-1,ele2=-1,c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(ele1==nums[i])
                c1++;
            else if(ele2==nums[i])
                c2++;
            else if(c1==0)
            {
                ele1=nums[i];
                c1=1;
            }
            else if(c2==0)
            {
                ele2=nums[i];
                c2=1;
            }
            
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if(ele1==nums[i])
                c1++;
            else if(ele2==nums[i])
                c2++;
        }
    if(c1>n/3)
        res.push_back(ele1);
    if(c2>n/3)
        res.push_back(ele2);
    return res;
}};
