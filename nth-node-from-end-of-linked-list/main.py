#User function Template for python3
'''
    Your task is to return the data stored in
    the nth node from end of linked list.
    
    Function Arguments: head (reference to head of the list), n (pos of node from end)
    Return Type: Integer or -1 if no such node exits.

    {
        # Node Class
        class Node:
            def __init__(self, data):   # data -> value stored in node
                self.data = data
                self.next = None
    }
'''
#Function to find the data of nth node from the end of a linked list
def getNthFromLast(head,n):
    #code here
    
    ptr1 = head
    ptr2 = head
    
    # offset ptr1
    i = 0
    while ptr1:
        ptr1 = ptr1.next
        i += 1
        if i == n:
            break
    else:
        return -1
    
    while ptr1:
        ptr1 = ptr1.next
        ptr2 = ptr2.next
    
    return ptr2.data


