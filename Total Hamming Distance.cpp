class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int count=0;
        for(int i=0;i<32;i++){
            int onebits=0;
            for(int num : nums)
                onebits+=((num>>i)&1);
            count+=(onebits*(nums.size()-onebits));
        }
        return count;
    }
};
