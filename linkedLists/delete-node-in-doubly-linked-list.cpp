#include <stdio.h>
#include <stdlib.h>

/* a Node of the doubly linked list */
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};

Node* deleteNode(struct Node **head_ref,int temp);

/* Function to print Nodes in a given doubly linked list
   This function is same as printList() of singly linked lsit */
void printList(struct Node *node)
{
  while(node!=NULL)
  {
    printf("%d ", node->data);
    node = node->next;
  }
   printf("\n");
}
 
/* Drier program to test above functions*/
int main()
{
  int t, x, n, i;
  scanf("%d",&t);
  
  while(t--)
  {
      /* Start with the empty list */
      struct Node *temp,*head = NULL;
      scanf("%d",&n);
      
      temp = NULL;
      
      for(i=0;i<n;i++){
        scanf("%d",&x);
        
        if(head == NULL){
            head = new Node(x);
            temp = head;
        }
        else{
            Node *temp1 = new Node(x);
            temp->next = temp1;
            temp1->prev = temp;
            temp = temp->next;
        }
      }
  
    scanf("%d",&x);
      
    deleteNode(&head,x);  /*delete first Node*/  
      
        /* Modified linked list will be NULL<-8->NULL */
        printList(head);           
        while(head->next!=NULL)
        {
    	    temp=head;
    	    head=head->next;
    	    free(temp);
    	}
    	
    	free(head);
	}
	return 0;
}
// } Driver Code Ends


/* Structure of Node
struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  
  Node(int x){
      data = x;
      next = NULL;
      prev = NULL;
  }
  
};
*/

// Function to delete the node at position x
Node* deleteNode(Node **head_ref, int x)
{ Node *q = NULL;
  Node *p = *head_ref;
  for(int i=0;i<x-1;i++){
         q=p;
         p=p->next;
  }
  
     
 if(p->next==NULL){
     q->next = NULL;
     free(p);
     return *head_ref;
 } else if(q==NULL){
     *head_ref = p->next;
     free(p);
     return *head_ref;
 }  
 else{
   (p->next)->prev = q;  
   p->prev=NULL;
  q->next = p->next;
  p->next=NULL;
  free(p);
 }

  return *head_ref;
}


