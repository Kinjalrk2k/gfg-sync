class Solution {
  public:
    long long calulate_gdc(long long A, long long B) {
        if(A == 0) return B;
        if(B == 0) return A;
        if(A == B) return A;
        if(A > B) return calulate_gdc(A-B, B);
        return calulate_gdc(A, B-A);
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long gdc = calulate_gdc(A, B);
        long long lcm = (A*B) / gdc;
        
        return {lcm, gdc};
    }
};
