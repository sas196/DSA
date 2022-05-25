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
    void helper(TreeNode*root,vector<int>&pq){
        if(root==nullptr){
            return;
        }
        pq.push_back(root->val);
        helper(root->left,pq);
        helper(root->right,pq);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pq;
        helper(root,pq);
        return pq;
        
    }
};