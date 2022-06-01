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
    int diameterOfBinaryTre(TreeNode*root,int &m){
        if(root==nullptr){
            return 0;
        }
        int lh=diameterOfBinaryTre(root->left,m);
        int rh=diameterOfBinaryTre(root->right,m);
        m=max(lh+rh,m);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int m=0;
        int c=diameterOfBinaryTre(root,m);
        return m;
        
    }
};