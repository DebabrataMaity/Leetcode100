class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int diff = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {  
            int a=nums[i];

            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                int sums=a+nums[j]+nums[k];
                
                if(abs(target-sums)< abs(diff)){
                    diff = target-sums;
                }
                
                if(sums<target)
                    ++j;
                else
                    --k;
            }
            if(diff == 0){
                break;
            }
        }
        return target - diff;
    }
};
