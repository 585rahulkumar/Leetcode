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
    vector<int> v;
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        while(root!=NULL||!s.empty()){
            if(root!=NULL){
                v.push_back(root->val);
                s.push(root);
                root=root->left;
            }
            else{
                root=s.top();
                s.pop();
                root=root->right;
            }
        }
        return v;
    }
};