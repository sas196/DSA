/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==nullptr)return nullptr;
        Node*r=root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            Node*prev=nullptr;
            for(int i=0;i<s;i++){
                Node*temp=q.front();
                q.pop();
                if(temp->left!=nullptr and temp->right!=nullptr){
                    if(prev==nullptr){
                        temp->left->next=temp->right;
                    }
                    else {
                        prev->next=temp->left;
                        temp->left->next=temp->right;
                    }
                }
                if(temp->left!=nullptr)q.push(temp->left);
                if(temp->right!=nullptr){
                    q.push(temp->right);
                    prev=temp->right;
                }
            }
        }
      return r;  
    }
};