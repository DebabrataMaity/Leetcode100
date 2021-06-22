class Solution {
public:
    
    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        if(p == nullptr && q == nullptr)
        {
            return true;
        }else if(p == nullptr || q == nullptr){
            return false;
        }else{
            if(p->val != q->val)
                return false;
        }
        if(p->left != nullptr && q->left == nullptr)
        {
            return false;
        }else if(p->left == nullptr && q->left != nullptr)
        {
            return false;
        }
        else if(p->left != nullptr && q->left != nullptr)
        {
            if(p->left->val != q->left->val)
            {
                return false;
            }
        }
        
        if(p ->right != nullptr && q->right == nullptr)
        {
            return false;
        }else if(p ->right == nullptr && q->right != nullptr)
        {
            return false;
        }else if(p->right != nullptr && q->right != nullptr)
        {
            if(p->right->val != q->right->val)
            {
                return false;
            }
        }
        bool flag = true;
        if(p->left != nullptr)
        {
            flag = flag && isSameTree(p->left,q->left);
        }
        if(p->right != nullptr)
        {
            flag = flag && isSameTree(p->right,q->right);
        }
        return flag;
    }
};
