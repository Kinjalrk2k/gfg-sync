class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here.
        
        int left = 1, right = m, mid, res;
        
        while(left <= right) {
            mid = (left + right) / 2;
            res = int(pow(mid, n));
            
            if(res == m) return mid;
            if(res > m) right = mid - 1;
            else left = mid + 1;
        }
        
        return -1;
    }
};
