class Solution {
public:
    TreeNode* convert(int low, int high, vector<int>&nums){
        while(low<=high){
        TreeNode * root = new TreeNode;
        int mid= (low+(high-low)/2);
        root->val= nums[mid];
        root->left= convert(low, mid-1,nums);
        root->right= convert(mid+1, high,nums);
        return root;
        }
        return nullptr;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        TreeNode * root;
        convert(0,nums.size()-1, nums);
        return root;
    }
};
