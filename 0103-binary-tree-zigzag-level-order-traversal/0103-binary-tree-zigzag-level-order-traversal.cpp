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
  #include <bits/stdc++.h>
public:
  
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>pq;
              int flag=0;
      if(root==nullptr){
        return pq;
      }
              queue<TreeNode*>q;
      q.push(root);
     
      while(!q.empty()){
        int m=q.size();
         vector<int>ans;
        while(m--){
          TreeNode*temp=q.front();
          q.pop();
          if(temp->left!=nullptr){
            q.push(temp->left);
          }
          if(temp->right!=nullptr){
            q.push(temp->right);
          }
          
          ans.push_back(temp->val);
          
        }
        if(flag==1){
          reverse(ans.begin(),ans.end());
        }
        pq.push_back(ans);
     
        flag=!flag;
        }
      return pq;
    }
};