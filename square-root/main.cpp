// Function to find square root
// x: element to find square root
class Solution {
  public:
    int floorSqrt(int n) {
        // Your code goes here
        
        int left = 1, right = n, mid, sq;
        
        while(left <= right) {
            mid = (left + right) / 2;
            sq = mid * mid;
            
            if(sq > n) right = mid - 1;
            else left = mid + 1;
        }
        
        return right;
    }
};
