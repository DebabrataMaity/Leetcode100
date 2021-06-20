class Solution {
public:
    int find(struct TreeNode * root, int * total_sum)
{
        
    if(root == NULL)
        return 0;
    
    if((root->left == NULL) && (root->right == NULL)) 
    {
       return root->val; 
    }
    
    int left_sum = find(root->left, total_sum);
    int right_sum = find(root->right, total_sum);
    
    int diff = left_sum - right_sum;
    if(diff < 0)
    {
        diff *= -1;
    }
    
    *total_sum += diff;
    return (left_sum + right_sum + root->val);
}


int findTilt(struct TreeNode* root)
{
    int total_sum = 0;
    
    find(root, &total_sum);
    return total_sum;

        
}
};
