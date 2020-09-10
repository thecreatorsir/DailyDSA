#include<bits/stdc++.h>
using namespace std;
typedef struct Node {
    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
}Node;
Node * insertList(Node * head,int n){
    Node * tail = head;
    if(tail==NULL)
      return NULL;
    int x;
    for(int i=0;i<n-1;i++){
        cin >> x;
        Node * new_node = new Node(x);
        tail->next = new_node;
        tail = new_node;
    }
    return head;
}
Node * evenOdd(Node * head){
    Node *oddhead = NULL;
    Node * evenhead = NULL;
    Node *oddtail = NULL;
    Node *eventail =NULL;
    Node *p=head;
    if(p==NULL)
      return NULL;
    while(p){
        if(p->data%2==0)
        if(evenhead==NULL){
            evenhead=eventail=p;
        }
        else{
            eventail->next = p;
            eventail=p;
        }
        else
        if(oddhead==NULL){
            oddhead=oddtail=p;
        }
        else{
            oddtail->next = p;
            oddtail=p;
        }
        p=p->next;
    }   if(evenhead!=NULL){
        head = evenhead;
    }
        if(eventail!=NULL){
            eventail->next=oddhead;
        }    
        if(oddtail!=NULL){
            oddtail->next=NULL;
        }
        return head;
    }
    
void printList(Node * head){
    Node *p = head;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main()
 {
int t;
cin>>t;
while(t--){
int n,x;
cin>>n;
cin>>x;
Node * head = new Node(x);
head = insertList(head,n);
head = evenOdd(head);
printList(head);
cout<<endl;
}
	return 0;
}
