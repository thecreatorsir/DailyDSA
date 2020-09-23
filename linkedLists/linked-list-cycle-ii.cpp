/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *t = head;
        ListNode *h = head;
        if(h==NULL or h->next==NULL){
            return NULL;
        }
   while(h!=NULL && h->next!=NULL){
      t=t->next;
      h=(h->next)->next;
         if(t==h){
             break;
         } 
   }
        if(h!=t)
            return NULL;
        h=head;
        while(t!=h){
            t=t->next;
            h=h->next;
        }
return h;  
}
};
