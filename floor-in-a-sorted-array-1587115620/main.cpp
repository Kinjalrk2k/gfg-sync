class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        
        long long first = 0, last = n-1, mid;
        while(first <= last) {
            mid = (first+last)/2;
            if(x == v[mid]) return mid;
            
            if(x > v[mid]) {
                first = mid+1;
            } else {
                last = mid-1;
            }
        }
        
        if(x > v[mid]) return mid;
        if(mid == 0) return -1;
        return mid-1;
    }
};

