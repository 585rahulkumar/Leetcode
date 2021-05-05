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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) 
            return result;
        TreeNode* tmp;
        queue<TreeNode*> q;
        q.push(root);
        int odd_even=1;
        while(!q.empty()){
            vector<int> level;
            int cnt=q.size();
            for(int i=0;i<cnt;i++){
                tmp=q.front();
                q.pop();
                level.push_back(tmp->val);
                if(tmp->left)  q.push(tmp->left);
                if(tmp->right) q.push(tmp->right);     
            }
            if(odd_even%2!=0){
                result.push_back(level);
                odd_even++;
            }
            else{
                reverse(level.begin(),level.end());
                result.push_back(level);
                odd_even++;
            }   
            
        }
        return result;
    }
};