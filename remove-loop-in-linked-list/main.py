'''
# node class:

class Node:
    def __init__(self,val):
        self.next=None
        self.data=val

'''

class Solution:
    #Function to remove a loop in the linked list.
    def removeLoop(self, head):
        # code here
        # remove the loop without losing any nodes
        
        slow = head
        fast = head
        prevFast = head
        isLoop = False
        
        while fast and fast.next:
            slow = slow.next
            prevFast = fast.next
            fast = fast.next.next
            
            if slow == fast:
                isLoop = True
                break
            
        if isLoop:
            slow = head
            while slow != fast:
                slow = slow.next
                prevFast = fast
                fast = fast.next
            
            prevFast.next = None
        
        # walk = head
        # while walk:
        #     print(walk.data)
        #     walk = walk.next
        


