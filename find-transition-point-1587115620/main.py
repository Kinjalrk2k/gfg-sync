class Solution:
    def transitionPoint(self, arr, n): 
        # Code here

        for i, e in enumerate(arr):
            if e == 1:
                return i
        
        return -1


