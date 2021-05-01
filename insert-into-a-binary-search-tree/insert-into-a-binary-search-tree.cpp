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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newnode=new TreeNode();
        newnode->val=val;
        newnode->left=NULL;
        newnode->right=NULL;
        if(root==NULL){
            root=newnode;
            return root;
        }
        TreeNode* temp=root;
        while(temp){
            if(temp->val>val && temp->left==NULL){
                temp->left=newnode;
                return root;
            }
            else if(temp->val>val)
                temp=temp->left;
            
            else if(temp->val<val && temp->right==NULL){
                temp->right=newnode;
                return root;
            }
            else 
                temp=temp->right;
        }
            
        return root;

        }
};