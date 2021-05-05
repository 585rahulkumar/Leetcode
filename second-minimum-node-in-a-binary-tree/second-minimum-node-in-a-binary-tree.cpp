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
    vector<int> itr;
    int findSecondMinimumValue(TreeNode* root) {
        helper(root);
        sort(itr.begin(),itr.end());
        if(itr.size()>=2){
            for(int i=0;i<itr.size()-1;i++){
                if(itr[i]<itr[i+1])
                    return itr[i+1];
            }
        } 
        return -1;
    }
    
    void helper(TreeNode *root){
        if(root!=NULL){
            helper(root->left);
            itr.push_back(root->val);
            helper(root->right);
        }
    }
};