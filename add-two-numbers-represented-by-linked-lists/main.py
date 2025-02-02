#User function Template for python3

''' Node for linked list:

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

'''
class Solution:
    #Function to add two numbers represented by linked list.
    def addTwoLists(self, first, second):
        # code here
        # return head of sum list
        
        def reverse(head):
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
            
        def printList(n):
            while n:
                print(n.data,end=' ')
                n = n.next
            print()
            
        revFirst = reverse(first)
        revSecond = reverse(second)
        
        # printList(revFirst)
        # printList(revSecond)
        
        # addition
        ptrFirst = revFirst
        ptrSecond = revSecond
        carry = 0
        result = LinkedList()
        
        
        while ptrFirst and ptrSecond:
            s = ptrFirst.data + ptrSecond.data + carry
            result.insert(s%10)
            carry = s // 10
            ptrFirst = ptrFirst.next
            ptrSecond = ptrSecond.next
        
        while ptrFirst:
            s = ptrFirst.data + carry
            result.insert(s%10)
            carry = s // 10
            ptrFirst = ptrFirst.next
        
        while ptrSecond:
            s = ptrSecond.data + carry
            result.insert(s%10)
            carry = s // 10
            ptrSecond = ptrSecond.next
        
        if carry:
            result.insert(carry)
            
        revResult = reverse(result.head)
        # printList(revResult)
        
        return revResult
        
        
        

