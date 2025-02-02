// User function Template for C++

class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int mmax = INT_MIN;
        for(auto i: arr) {
            mmax = max(mmax, i);
        }
        return mmax;
    }
};

