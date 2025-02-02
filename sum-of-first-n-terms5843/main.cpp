// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long n) {
        // code here
        if(n == 1) return 1;
        return (n*n*n) + sumOfSeries(n-1);
    }
};
