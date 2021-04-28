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
    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        size_t result=1;
        queue<pair<TreeNode*,size_t>> q;
        q.push({root,0});
        while(!q.empty()){
            size_t s=q.size();
            size_t start=q.front().second;
            size_t end=q.back().second;
            result=max(result,end-start+1);
            for(int i=0;i<s;i++)
            {
                pair<TreeNode*,size_t> p=q.front();
                size_t idx=p.second;
                q.pop();
                if(p.first->left) q.push({p.first->left,2*idx+1});
                if(p.first->right) q.push({p.first->right,2*idx+2});
                
            }
        }
            
       return result; 
    }
};