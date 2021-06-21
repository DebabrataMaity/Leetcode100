class Solution {
public:
    void preOrder(TreeNode* root, vector<int> &nums){
        if(root == NULL)
            return;
        if(!root->left && !root->right){        
            nums.push_back(root->val);
        }
        
        preOrder(root->left, nums);             
        preOrder(root->right, nums);            
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafNodes1, leafNodes2;        
        preOrder(root1, leafNodes1);                 
        preOrder(root2, leafNodes2);                 
        if(leafNodes1.size() != leafNodes2.size())      
            return false;
        for(int i = 0; i < leafNodes1.size(); ++i){      
            if(leafNodes1[i] != leafNodes2[i])
                return false;
        }
        return true;
    }
};
