//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data; 
        node = node->next; 
    }  
    cout<<"\n";
} 

Node* addOne(Node *head);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        
        head = addOne(head);
        printList(head); 
    }
    return 0; 
} 
// } Driver Code Ends


//User function template for C++

/* 

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
 Node * reverse(Node * head) 
    {
        Node* current = head; 
        Node *prev = NULL, *next = NULL; 
  
        while (current != NULL) { 
            next = current->next; 
            current->next = prev; 
            prev = current; 
            current = next; 
        } 
        head = prev; 
    }
Node* addOne(Node *head) 
{ head = reverse(head);
Node *p=head;
while(p->next!=NULL){
    if(p->data + 1 <= 9){
       p->data = p->data + 1;
       break;
    }
    else{
      p->data = 0;
    }
    p=p->next;
}
if(p->next == NULL && p->data+1==10){
    Node * new_node =new Node(1);
    p->data = 0;
    p->next = new_node;
}
if(p->next == NULL && p->data+1<10){
    p->data = p->data+1;
}
head = reverse(head);
  return head;
}
