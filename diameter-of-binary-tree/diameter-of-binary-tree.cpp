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
class Solution {
public:
    int ans=0;
    int height(TreeNode* root)
    {
        int x,y;
        if(root)
        {
            x=height(root->left);
            y=height(root->right);
            ans=max(ans,x+y);
            return 1+max(x,y);
                
        }
        return 0;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        height(root);
        return ans;
        
    }
};