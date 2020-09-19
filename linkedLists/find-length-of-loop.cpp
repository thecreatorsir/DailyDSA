// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}
// } Driver Code Ends


/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// Your task is to complete the function this function
// function should return the size of the loop

int countNodesinLoop(struct Node *head)
{
   Node * h = head; 
    Node * c = NULL; 
    Node * t = head;  Node * prev = NULL;
    while(h!=NULL && h->next!=NULL){
        t=t->next;
      h=(h->next)->next;
         if(t==h)
         break;
    }
    if(h==t){
        c = h;
    }
    if(c==NULL)
        return 0;
    
    Node *temp = c->next;    
    int count = 1;
    while(temp!=c){
        count++;
        temp = temp->next;
    }
    
   return count; 
      
}
