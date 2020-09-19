def multiply(head1,head2,newhead):
    curr1 = head1
    curr2 = head2
    ans = newhead
    
    while curr1!=None:
        temp = ans
        curr2=head2
        while curr2!=None:
            temp.data += curr1.data*curr2.data
            temp = temp.next
            curr2 =curr2.next
        ans = ans.next
        curr1 = curr1.next
            
    
def proOfPolynomials(head1,head2,n1,n2):
    #return head of resultant linked list
    if head1 == None:
        return head2
    if head2 == None:
        return head1
    k = n1+n2- 1
    newhead = Node(0)
    tail = newhead;
    while k>1:
        tail.next = Node(0)
        tail = tail.next
        k=k-1
    tail.next = None
    multiply(head1,head2,newhead)
    return newhead
    
