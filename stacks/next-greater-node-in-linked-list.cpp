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
    vector<int> nextLargerNodes(ListNode* head) {
        stack <int> s;
        ListNode* p = head;
        vector <int> list;
        
        //getting the length of list
        while(p){
         list.push_back(p->val);
            p=p->next;
        }
         vector <int> v(list.size(),0);
        p=head;
        
        //traversing through the list
        
        for(int i=0;i<list.size();i++){
            while(!s.empty() and list[i] > list[s.top()]){
                v[s.top()] = list[i];
                s.pop();
            }
            s.push(i);
        }
        
        
        return v;    
    }
};
