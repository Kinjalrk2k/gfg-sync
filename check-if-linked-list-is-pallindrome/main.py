#User function Template for python3
'''
    Your task is to check if given linkedlist
    is a pallindrome or not.
    
    Function Arguments: head (reference to head of the linked list)
    Return Type: boolean , no need to print just return True or False.

    {
        # Node Class
        class Node:
            def __init__(self, data):   # data -> value stored in node
                self.data = data
                self.next = None
    }

    Contributed By: Nagendra Jha
'''
#Function to check whether the list is palindrome.
class Solution:
    def isPalindrome(self, head):
        #code here
        
        # finding the mid point
        slow = head
        fast = head
        
        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next
        
        mid = slow
        
        # reversing the links in the second half of the ll
        prevSlow = None
        while slow.next:
            nextSlow = slow.next
            slow.next = prevSlow
            prevSlow = slow
            slow = nextSlow
        slow.next = prevSlow
        
        # traversing from both ends
        ptr = head
        while ptr and slow:
            if ptr.data != slow.data:
                return False
            else:
                ptr = ptr.next
                slow = slow.next
        
        return True
        
            


