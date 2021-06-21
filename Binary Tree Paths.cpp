class Solution {
public:
    vector<string> vec;
    string str;
    
    void traversePath(TreeNode *root, vector<string>& vec, string str)
    {
        if(root == NULL)
            return;
        
        str = str + to_string(root->val);
        
        if(root->left == NULL && root->right == NULL)
        {
            vec.push_back(str);
            return;
        }
            
        str = str + "->";
        
        string temp = str;
        traversePath(root->left, vec, str);
        traversePath(root->right, vec, temp);
            
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        traversePath(root, vec, str);
        return vec;
    }
};
