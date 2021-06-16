class Solution {
public:
    int search(vector<int>& nums, int target) {
        long left=0,right=nums.size()-1,cur;
        while(left<=right)
        {
            cur=left+(right-left)/2;
            if(nums[cur]==target)
                return cur;
            if(target<nums[cur])
                right=cur-1;
            else
                left=cur+1;
                
        }
            return -1;
    }
};
