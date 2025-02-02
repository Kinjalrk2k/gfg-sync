#User function Template for python3
'''
    Your task is to remove duplicates from given 
    sorted linked list.
    
    Function Arguments: head (head of the given linked list) 
    Return Type: none, just remove the duplicates from the list.

    {
        # Node Class
        class Node:
            def __init__(self, data):   # data -> value stored in node
                self.data = data
                self.next = None
    }
'''
#Function to remove duplicates from sorted linked list.
def removeDuplicates(head):
    #code here

    ptr = head.next
    prev = head
    
    while ptr:
        if prev.data == ptr.data:
            prev.next = ptr.next
        else:
            prev = ptr
        ptr = ptr.next
        
    
    

