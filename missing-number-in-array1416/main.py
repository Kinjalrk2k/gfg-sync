#User function Template for python3


class Solution:
    def missingNumber(self,array,n):
        # code here
        actualSum = (n * (n+1)) / 2
        arrSum = 0;
        for e in array:
            arrSum += e
        
        return int(actualSum - arrSum)


