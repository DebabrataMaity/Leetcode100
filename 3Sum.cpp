class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> temp;
        int n = nums.size();
        if(n<3){
            return {};
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum == 0){
                        temp.push_back({nums[i],nums[j],nums[k]});
                        while(j<k && nums[j]==nums[j+1]){
                            j++;
                        }
                        while(j<k && nums[k]==nums[k-1]){
                            k--;
                        }
                        j++;
                        k--;
                    }
                    else if(sum < 0){
                        j++;
                    }
                    else{
                        k--;
                    }
                    
                }
                
            }
        
        return temp;
    }
};
