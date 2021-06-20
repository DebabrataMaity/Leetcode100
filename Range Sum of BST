class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        int v=root->val;
        if(v>=low&&v<=high){
            return v+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
        }
        else{
            return 0+rangeSumBST(root->left,low,high)+rangeSumBST(root->right,low,high);
        }
    }
};
