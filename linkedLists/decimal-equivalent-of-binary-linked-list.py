def decimalValue(head):
    MOD=10**9+7
    # Code here
    res1 = ""
    if head == None:
        return 0;
    while head!=None:
        res1 += str(head.data)
        head = head.next
    res1 = res1[::-1]
    res2 = 0
    for i in range(len(res1)):
        res2 = (res2 + int(res1[i])*(2**i))%MOD
  
    return res2    
