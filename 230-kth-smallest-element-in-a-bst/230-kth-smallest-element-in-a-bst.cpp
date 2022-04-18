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
    void kth(TreeNode*root,int k,vector<int>&pq,int n){
        if(root==nullptr){
            return ;
        }
        if(root->left!=nullptr){
            kth(root->left,k,pq,n);
        }
        pq.push_back(root->val);
        if(root->right!=nullptr){
            kth(root->right,k,pq,n);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>a;
        kth(root,k,a,k);
        return a[k-1];
        
    }
};