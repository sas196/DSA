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
    void helper(TreeNode*root,int targetSum,vector<vector<int>>&pq,vector<int>ans){
        if(root->left==nullptr&&root->right==nullptr&&root->val==targetSum){
            ans.push_back(root->val);
            pq.push_back(ans);
        }
        
        if(root->left!=nullptr){
            ans.push_back(root->val);
            helper(root->left,targetSum-root->val,pq,ans);
        }
        if(root->right!=nullptr){
           if(root->left==nullptr)
            ans.push_back(root->val);
            
            helper(root->right,targetSum-root->val,pq,ans);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<vector<int>>pq;
        if(root==nullptr){
            return pq;
        }
        vector<int>ans;
        helper(root,targetSum,pq,ans);
        return pq;
        
    }
};