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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
       
        vector<vector<int>>pq;
         if(root==nullptr){
            return pq;
        }
        TreeNode*temp=root;
        queue<TreeNode*>q;
        q.push(temp);
        while(!q.empty())
        {
            int m=q.size();
            vector<int>ans;
            while(m--){
                TreeNode*t=q.front();
                q.pop();
                ans.push_back(t->val);
                if(t->left!=nullptr){
                    q.push(t->left);
                }
                if(t->right!=nullptr){
                    q.push(t->right);
                }
            }
            pq.push_back(ans);
            ans.clear();
        }
        reverse(pq.begin(),pq.end());
        return pq;
    }
};