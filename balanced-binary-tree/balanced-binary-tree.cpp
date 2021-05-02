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
    bool balance=true;
    int height(TreeNode* root){
        if(root!=NULL){
            int x=height(root->left);
            int y=height(root->right);
            if(abs(x-y)>1)
                balance=false;
            if(x>y){
                return x+1;
            }  
            else{
                return y+1;
            }    
        }
        else
            return 0;
    }
    bool isBalanced(TreeNode* root) {
        height(root);
        return balance;
    }
};