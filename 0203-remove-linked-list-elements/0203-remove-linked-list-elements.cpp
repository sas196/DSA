/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
         if(head==nullptr)return head;
        ListNode*slow=head;
        ListNode*fast=head->next;
       
        if(head->next==nullptr){
            if(head->val==val)return head->next;
            else return head;
        }
        while(fast!=nullptr){
            if(fast->val==val){
                fast=fast->next;
                slow->next=fast;
            }
            else{
                slow=fast;
                fast=fast->next;
            }
        }
        if(head->val==val)return head->next;
        return head;
    }
};