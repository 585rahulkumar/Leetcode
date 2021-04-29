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
    bool isSymmetric(TreeNode* root) {
        return SymmetricTest(root->left,root->right);
    }
    bool SymmetricTest(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL)   //both left and right are NULL
            return true;
        
        else if((root1==NULL&&root2!=NULL)||(root1!=NULL&&root2==NULL))//one is not present
            return false;
        
        else if(root1->val != root2->val) //Values are different
            return false; 
        
        return SymmetricTest(root1->left,root2->right) && SymmetricTest(root1->right,root2->left);
    }
};