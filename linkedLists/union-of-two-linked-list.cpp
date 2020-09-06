#include<bits/stdc++.h>
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

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

struct Node* makeUnion(struct Node* head1, struct Node* head2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        printList(makeUnion(first,second));
    }
    return 0;
}
// } Driver Code Ends


/*
// structure of the node is as follows

struct node
{
	int data;
	struct node* next;
	
	node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{   
    set<int > s;
    Node *p = head1;
    while(p != NULL)
    {
        s.insert(p->data);
        p = p->next; 
    }
    
    Node *q = head2;
    while(q != NULL)
    {
        s.insert(q->data);
        q = q->next; 
    }
    
    auto it = s.begin();
    Node *head3 = new Node(*it);
    Node *tail3 = head3;
    it++;
    
    for( ; it != s.end(); it++)
    {
        tail3->next = new Node(*it);
        tail3 = tail3->next;
    }
    
    return head3;
   
}

