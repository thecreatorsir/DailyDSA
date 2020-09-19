def subLinkedList(l1, l2): 
    s1 = ""
    s2 = ""
    while l1!=None:
        s1+= str(l1.data)
        l1=l1.next
    while l2!=None:
        s2+=str(l2.data)
        l2=l2.next
    result = abs(int(s1)-int(s2))
    result = str(result)
    
    newhead = Node(result[0])
    tail = newhead
    temp = 1
    while temp<len(result):
        tail.next = Node(result[temp])
        tail = tail.next
        temp = temp+1
    tail.next = None 
    return newhead
