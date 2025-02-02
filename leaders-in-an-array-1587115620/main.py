class Solution:
    #Back-end complete function Template for Python 3
    
    #Function to find the leaders in the array.
    def leaders(self, A, N):
        #Code here
        
        high = 0
        result = []
        for i in range(N-1, -1, -1):
            if A[i] >= high:
                result.insert(0, A[i])
                high = A[i]
        
        return result


