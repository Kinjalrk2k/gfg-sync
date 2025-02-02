# Your task is to complete this function

'''

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''


class Solution:
    
    #Function to rotate a linked list.
    def rotate(self, head, k):
        # code here

        ptr = head
        prev = None
        while k > 0:
            prev = ptr
            ptr = ptr.next
            k -= 1
        
        newHead = ptr
        prev.next = None
        
        if not ptr:
            # already reached end, no rotation
            return head
        
        while ptr.next:
            ptr = ptr.next
        ptr.next = head
        
        return newHead

