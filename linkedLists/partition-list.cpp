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
    ListNode* partition(ListNode* head, int x) {
      ListNode * p = head;
        ListNode * newhead = NULL;
        ListNode * tail = NULL;
        while(p){
            if(p->val<x){
                if(newhead==NULL){
                    newhead = new ListNode(p->val);
                    tail = newhead;
                }
                else{
                    tail->next = new ListNode(p->val);
                    tail = tail->next;
                }
            }
            p=p->next;
        }
        p=head;
        if(newhead!=NULL){
            while(p){
                if(p->val>=x){
                    tail->next = new ListNode(p->val);;
                    tail = tail->next;
                }
                p=p->next;
            }
        }
        else{
            return head;
        }
        return newhead;
    }
};
