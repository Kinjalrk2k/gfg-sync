// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int max1 = -1, max2 = -1;
        for(auto i: arr) {
            if(i > max1) {
                max2 = max1;
                max1 = i;
            } else if(i > max2 && i < max1) max2 = i;
        }
        
        return max2;
    }
};
