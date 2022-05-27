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
    void helper(TreeNode*root,vector<int>&pq,int levels){
        if(root==nullptr){
            return;
        }
        if(pq.size()==levels){
            pq.push_back(root->val);
        }
        helper(root->right,pq,levels+1);
        helper(root->left,pq,levels+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>pq;
        helper(root,pq,0);
        return pq;
        
        
    }
};