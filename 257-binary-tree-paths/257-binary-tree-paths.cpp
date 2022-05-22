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
    void helper(TreeNode*root,vector<string>&pq,string s){
        if(root->left==nullptr&& root->right==nullptr){
            s.pop_back();
            s.pop_back();
            pq.push_back(s);
        }
        if(root->left!=nullptr){
            helper(root->left,pq,s+to_string(root->left->val)+"->");
        }
        if(root->right!=nullptr){
            helper(root->right,pq,s+to_string(root->right->val)+"->");
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>pq;
        helper(root,pq,""+to_string(root->val)+"->");
        return pq;
        }
};