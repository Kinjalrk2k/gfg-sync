from typing import List


class Solution:
    def convertToWave(self, n : int, a : List[int]) -> None:
        # code here
        
        i = 0
        while i<n-1:
            a[i], a[i+1] = a[i+1], a[i]
            i += 2
        



