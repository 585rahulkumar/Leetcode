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
    int helper(TreeNode* root,int curmin,int curmax){
        if(root==NULL)
            return curmax-curmin;
        
        curmin=min(root->val,curmin);
        curmax=max(root->val,curmax);
        
        int l=helper(root->left,curmin,curmax);
        int r=helper(root->right,curmin,curmax);
        
        return max(l,r);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL) return 0;
        return helper(root,root->val,root->val);
    }
};