class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1,cur;
        vector<int> v;
        while(left<=right)
        {
            int leftelement=numbers[left];
            int rightelement=numbers[right];
            if(leftelement+rightelement==target)
            {
                v.push_back(left+1);
                v.push_back(right+1);
                break;
            }
            else if(target<(leftelement+rightelement))
                right--;
            else
                left++;
        }
        return v;
    } 
};
