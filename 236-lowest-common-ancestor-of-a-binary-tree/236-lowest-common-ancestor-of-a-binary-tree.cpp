/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr){
            return nullptr;
        }
        if(root->val==p->val||root->val==q->val){
            return root;
        }
        TreeNode* temp1=lowestCommonAncestor(root->left,p,q);
        TreeNode* temp2=lowestCommonAncestor(root->right,p,q);
        if(temp1&&temp2){
            return root;
        }
        if(temp1!=nullptr&&temp2==nullptr){
            return temp1;
        }
        if(temp1==nullptr&&temp2!=nullptr){
            return temp2;
        }
        if(temp1==nullptr&&temp2==nullptr){
            return nullptr;
        }
        
        return nullptr;
        
    }
};