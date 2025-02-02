// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int f=INT_MIN, c=INT_MAX;
        for(auto e: arr) {
            if(e <= x && e > f) f = e;
            if(e >= x && e < c) c = e;
        }
        
        if(f == INT_MIN) f = -1;
        if(c == INT_MAX) c = -1;
        
        vector<int> result = {f, c};
        return result;
    }
};
