class Solution {
    void solve(TreeNode* root,int& sum)
    {
        if(root==NULL)
        return ;
        
        if(root->left!=NULL && root->left->right==NULL && root->left->left==NULL)
        sum=sum+root->left->val;

        solve(root->left,sum);
        solve(root->right,sum);
       
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {

        int sum=0;

        solve(root,sum);

        return sum;
        
    }
};
