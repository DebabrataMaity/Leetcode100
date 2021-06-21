class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int ele=0;
        for(auto num:nums)
        {
            if(c==0)
                ele=num;
            if(ele==num)
                c+=1;
            else
                c--;
        }
        return ele;
    }
};
