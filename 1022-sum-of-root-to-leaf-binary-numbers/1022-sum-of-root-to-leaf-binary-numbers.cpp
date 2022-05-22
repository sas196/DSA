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
     
    void helper(TreeNode*root,int & m,string a){
        if(root->left==nullptr&&root->right==nullptr){
            m+=stoi(a,nullptr,2);
              }
        if(root->left!=nullptr){
            
            helper(root->left,m,a+to_string(root->left->val));
            
        }
        if(root->right!=nullptr){
            
            helper(root->right,m,a+to_string(root->right->val));
            
        }
        return;
    }
    int sumRootToLeaf(TreeNode* root) {
        int m=0;
        helper(root,m,""+to_string(root->val));
        return m;
    }
};