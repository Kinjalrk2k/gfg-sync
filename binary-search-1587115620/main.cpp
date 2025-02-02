// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low = 0, high = n-1;
        int mid;
        
        while(low <= high) {
            mid = (low + high) / 2;
            if(arr[mid] == k) {
                return mid;
            } else if(arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return -1;
    }
};
