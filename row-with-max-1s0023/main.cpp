// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr[0].size(), left, right, mid;
        int res, ones, index = -1, omax = 0;
        
        for(int i = 0; i<arr.size(); i++) {
            left = 0;
            right = n-1;
            res = n;
            
            while(left <= right) {
                mid = (left+right) / 2;
                if(arr[i][mid] == 0) {
                    left = mid+1;
                } else {
                    right = mid-1;
                    res = mid;
                }
            }
            
            ones = n - res;
            // cout<<ones<<endl;
            if(ones > omax) {
                omax = ones;
                index = i;
            }
        }
        
        return index;
    }
};
