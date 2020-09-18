// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


// Rearranges given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head);

/* Driver program to test above function*/
int main()
{
    int T,i,n,l;

    cin>>T;

    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;

            if (head == NULL)
            {   
                head = temp = new Node(l); 
                
            }
            else
            {  temp->next = new Node(l);
               temp = temp->next;
            }
        }

        head = rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
    return 0;
}
// } Driver Code Ends


/* Node structure

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
#include <bits/stdc++.h>
Node *rearrangeEvenOdd(Node *head)
{
   Node *p = head;
   if(head==NULL || head->next == NULL)
   return head;
   
   vector <int> odd;
   vector <int> even;
   int flag = 1;
   while(p!=NULL){
       if(flag%2 == 1){
           odd.push_back(p->data);
           flag++;
       }
       else{
         even.push_back(p->data);
           flag++;  
       }
       p=p->next;
   }
   auto itr = odd.begin();
    Node * newhead =new Node(*itr);
    Node * tail = newhead;
    itr++;
    for(;itr!=odd.end();itr++){
        tail->next = new Node(*itr);
        tail = tail->next;
    }
    
    auto it = even.begin();
    for(;it!=even.end();it++){
       tail->next =new Node(*it);
        tail = tail->next;
    }
   return newhead;
}
