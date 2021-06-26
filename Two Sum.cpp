class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {        
       map<int,int> tab;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
        	if( tab.find( target - nums[i]) != tab.end() ){           		
        		res.push_back(tab.find(target-nums[i])->second);
        		res.push_back(i);
        		return res;
			}
        	else{
        		tab.insert({nums[i],i});
			}            
        }
       return res;	          
    }
};
