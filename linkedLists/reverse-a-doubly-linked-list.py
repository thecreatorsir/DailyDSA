def reverseDLL(head):
    #return head after reversing
     curr = head;
     while curr!=None:
         curr.next,curr.prev =curr.prev, curr.next
         newhead = curr
         curr=curr.prev
     return newhead

