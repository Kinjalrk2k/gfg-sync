#function Template for python3

"""
# Node Class

class node:
    def __init__(self, val):
        self.data = val
        self.next = None

"""

class Solution:
    #Function to reverse a linked list.
    def reverseList(self, head):
        # Code here
        
        prev = None
        ptr = head
        
        while ptr.next:
            nextPtr = ptr.next
            ptr.next = prev
            prev = ptr
            ptr = nextPtr
        
        head = ptr
        head.next = prev
        
        return head
            




