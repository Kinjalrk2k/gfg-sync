#User function Template for python3
'''
    Function to merge two sorted lists in one
    using constant space.
    
    Function Arguments: head_a and head_b (head reference of both the sorted lists)
    Return Type: head of the obtained list after merger.

    {
        # Node Class
        class Node:
            def __init__(self, data):   # data -> value stored in node
                self.data = data
                self.next = None
    }

'''
#Function to merge two sorted linked list.
def sortedMerge(head1, head2):
    # code here
    
    ptr1 = head1
    ptr2 = head2
    
    newHead = Node(None)
    ptr3 = newHead
    
    while ptr1 and ptr2:
        if ptr1.data < ptr2.data:
            ptr3.next = ptr1
            ptr1 = ptr1.next
        else:
            ptr3.next = ptr2
            ptr2 = ptr2.next
        
        ptr3 = ptr3.next
    
    if ptr1:
        ptr3.next = ptr1
    
    if ptr2:
        ptr3.next = ptr2
    
    return newHead.next
    


