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
    void helper(TreeNode*root,TreeNode*cp,int cl,int x,int y,int parents[],int level[]){
        if(root==nullptr)return;
        if(root->val==x){
            parents[0]=cp->val;
            level[0]=cl;
        }
        if(root->val==y){
            parents[1]=cp->val;
            level[1]=cl;
        }
        helper(root->left,root,cl+1,x,y,parents,level);
        helper(root->right,root,cl+1,x,y,parents,level);
        return;
    }
    bool isCousins(TreeNode* root, int x, int y) {
      int parents[2];
      int level[2];
       TreeNode* temp=new TreeNode(-1);
       helper(root,temp,0,x,y,parents,level);
       return parents[0]!=parents[1]&&level[0]==level[1];
        
    }
};