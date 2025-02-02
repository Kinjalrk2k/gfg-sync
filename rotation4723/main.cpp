// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int first = 0, last = n-1, mid;

        while(first < last) {
            if(arr[first] < arr[last]) return first;

            mid = (first + last) / 2;

            // unsorted right
            if(arr[mid] > arr[last]) first = mid+1;

            // sorted right
            else last = mid;
        }

        return first;
    }
};

