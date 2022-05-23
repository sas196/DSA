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
    void helper(TreeNode*root,int& m,TreeNode*proot){
        if(root->left==nullptr&&root->right==nullptr && proot->left==root){
            m+=root->val;
        }
        if(root->left!=nullptr){
            helper(root->left,m,root);
        }
        if(root->right!=nullptr){
            helper(root->right,m,root);
        }
       // if(root->right!=nullptr&&root->right->left==nullptr)
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==nullptr&&root->right==nullptr){
            return 0;
        }
        int m=0;
        helper(root,m,nullptr);
        return m;
    }
};