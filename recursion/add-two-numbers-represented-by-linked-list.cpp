Node* addSameSize(Node* head1, Node* head2, int* carry) 
{ 
if(head1==NULL && head2==NULL)
	    return NULL;
	Node *ans = new Node(0);
	ans->next = addSameSize(head1->next,head2->next,carry);
	if(ans->next != NULL)
	{
	    ans->data = (head1->data + head2->data + *carry)%10;
	    *carry = (head1->data + head2->data + *carry)/10;
	}
	else
	{
	    ans->data = (head1->data + head2->data)%10;
	    *carry = (head1->data + head2->data)/10;
	}
	return ans;
} 

void addCarryToRemaining(Node* head1, Node* curr, int* carry, Node** result) 
{ 
	if(head1==curr)
	    return;
	Node *temp = new Node(0);
	addCarryToRemaining(head1->next,curr,carry,result);
	temp->next = *result;
	temp->data = (head1->data + *carry)%10;
	*carry = (head1->data + *carry)/10;
	*result = temp;
}

