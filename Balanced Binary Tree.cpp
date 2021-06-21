int fnc(TreeNode* root,bool &ans){
    if(root==NULL)return 0;
    int left=fnc(root->left,ans);
    int right=fnc(root->right,ans);
    if(abs(right-left)>1)ans=false;
    return max(left,right)+1;
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL)return true;
        bool ans=true;
         fnc(root,ans);
        return ans;
    }
};
