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
private:
    vector<double> result;
public:
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==NULL) 
            return result;
        double avg;
        TreeNode* tmp;
        queue<TreeNode*> q;
        q.push(root);
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
            double sum=0;
            for(int i=0;i<level.size();i++){
                sum+=level[i];
            }
            avg=sum/level.size();
            result.push_back(avg);
            
        }
        return result;
    }
};