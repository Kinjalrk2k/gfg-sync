#User function Template for python3
'''
        # Node Class
        class Node:
            def __init__(self, data):   # data -> value stored in node
                self.data = data
                self.next = None
    
'''
class Solution:
    #Function to remove duplicates from unsorted linked list.
    def removeDuplicates(self, head):
        # code here
        # return head after editing list
        
        hmap = {}
        ptr = head
        prev = None
        while ptr:
            if ptr.data not in hmap:
                hmap[ptr.data] = "<3"
                prev = ptr
                ptr = ptr.next
            else:
                prev.next = ptr.next
                ptr = ptr.next

        return head

