# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        # Your code here
        sum = 0
        for e in A:
            sum += e
        
        lsum = 0
        for i in range(0, N):
            if i >= 1:
                lsum += A[i-1]
            
            rsum = sum - lsum - A[i]
            if rsum == lsum:
                return i+1
        
        return -1



