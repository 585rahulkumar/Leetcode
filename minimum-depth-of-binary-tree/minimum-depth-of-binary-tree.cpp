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
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int x,y;
        while(root)
        {
            x=minDepth(root->left);
            y=minDepth(root->right);
            if(x==0||y==0){
                return max(x+1,y+1);
            }
            else
             return min(x+1,y+1);

        }
        return 0;
    }
};