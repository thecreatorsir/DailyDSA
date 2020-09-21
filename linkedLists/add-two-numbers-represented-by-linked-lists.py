def addLists(first, second):
    # code here
    # return head of sum list
   if first == None:
       return second
   if second == None:
       return first
   res1 = ""
   res2 = ""
   while first!=None:
       res1+=str(first.data)
       first = first.next
   while second!=None:
       res2+=str(second.data)
       second = second.next
    
   result = int(res1)+int(res2)
   result = str(result)
   
   newhead = Node(result[0])
   tail = newhead;
   temp = 1
   while temp < len(result):
       tail.next = Node(result[temp])
       tail = tail.next
       temp +=1
   tail.next = None
   
   return newhead
       
