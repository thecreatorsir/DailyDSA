#include <bits/stdc++.h>
using namespace std;

// Linked List Node
struct Node
{
    Node* next;
    int data;
};
void sortList(Node** head);
// Utility function to insert a node at the
// beginning
void push(Node** head, int data)
{
    Node* newNode = new Node;
    newNode->next = (*head);
    newNode->data = data;
    (*head) = newNode;
}

// Utility function to print a linked list
void printList(Node* head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next != NULL)
            cout << " ";
        head = head->next;
    }
    cout<<endl;
}


// Driver code
int main()
{

int t=0;
int n = 0;
cin>>t;
while(t--)
{
 Node* head = NULL;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
       // push(&head, a);
    }
    for(int i=n-1;i>=0;i--)
    {
        push(&head, arr[i]);
    }
   // printList(head);

    sortList(&head);

    printList(head);

}
    return 0;
}
// } Driver Code Ends


/* The structure of the Linked list Node is as follows:
struct Node
{
    Node* next;
    int data;
}; */

/*Your method shouldn't print anything
 it should transform the passed linked list */
void sortList(Node** head)
{
    Node * p = *head;
    if(p==NULL || p->next == NULL)
     return;
    vector <int > v;
    while(p){
        v.push_back(p->data);
        p=p->next;
    }
    sort(v.begin(),v.end());
    auto itr = v.begin();
    Node * newhead = new Node();
    newhead->data = *itr;
    Node * tail = newhead;
    itr++;
    while(itr!=v.end()){
        Node * temp = new Node();
        temp ->data = *itr;
       tail->next = temp;
       tail = tail->next;
       itr++;
    }
    *head = newhead;
}
