// User function Template for C++
class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        long long fact = 1;
        long long i = 2;
        
        vector<long long> v;
        
        while(fact <= n) {
            v.push_back(fact);
            fact *= i;
            i++;
        }
        
        return v;
    }
};
