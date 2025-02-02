class Solution:
    def duplicates(self, arr, n): 
        # code here
        visited = [0] * n
        for e in arr:
            visited[e] += 1
        
        result = []
        for i,e in enumerate(visited):
            if e > 1:
                result.append(i)
        
        if len(result):
            return result
        return [-1]


