# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def splitListToParts(self, root: ListNode, k: int) -> List[ListNode]:
        node = root
        count = 0
        lis = []
        while node:
            count += 1
            node=node.next
        node = root
        m = count//k
        n = count%k
        while node:
            m = count//k
            tnode = node
            if n!= 0:
                m += 1
                n-=1
            while(m!=1):
                tnode = tnode.next
                m-=1
            pnode = tnode.next
            tnode.next = None
            lis.append(node)
            node = pnode
        tcount = len(lis)
        if tcount<k:
            while(tcount!=k):
                lis.append(None)
                tcount += 1        
        return lis
        
