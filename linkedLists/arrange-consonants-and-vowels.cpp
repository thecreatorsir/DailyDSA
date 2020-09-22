#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}

// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   Node * vhead = NULL;
   Node * vtail = NULL;
   Node * chead = NULL;
   Node * ctail = NULL;
   Node * p = head;
   char arr[5] = {'a','e','i','o','u'};
   while(p){
       int flag = 0;
       for(int i=0;i<5;i++){
           if(arr[i] == p->data){
               flag = 1;
               break;
           }
       }
             
        if(flag == 1){
            //alphabet is vowel
            if(vhead == NULL){
                   vhead = new Node(p->data);
                   vtail = vhead;
                 
               }else{
                   vtail->next = new Node(p->data);
                   vtail = vtail->next;
                 
               }
        }else{
            //alphabet id consonent
               if(chead == NULL){
                   chead = new Node(p->data);
                   ctail = chead;
              
               }else{
                   ctail->next = new Node(p->data);
                   ctail = ctail->next;
                 
               }
           }
       
       p=p->next;
   }
   if(vtail!=NULL && ctail!=NULL){
     vtail->next = chead;
     return vhead; 
   }
   if(ctail == NULL)
     return vhead;
     
return chead;     
}

