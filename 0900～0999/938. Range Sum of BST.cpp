/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
    private:
        int sum=0;
        int Low;
        int High;
    public:
        void dfs(TreeNode* root)
        {
            if(root->left!=NULL) dfs(root->left);
            if(root->right!=NULL) dfs(root->right);
            if(root->val>=Low && root->val<=High) sum+=root->val;
        }
    
        int rangeSumBST(TreeNode* root, int low, int high)
        {
            Low=low;
            High=high;
            dfs(root);
            
            return sum;
        }
};
