class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) {

        // Your code here
        
        int first = 0, last = N-1;
        
        while(first <= last) {
        int mid = first + ((last-first)/2);
            if(arr[mid] == K) return 1;
            else if(arr[mid] < K) first = mid + 1;
            else last = mid - 1;
        }
        
        return -1;
    }
};
