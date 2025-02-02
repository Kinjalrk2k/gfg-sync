class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
        for(int i=0; i<N; i++) {
            arr[i]--; // for 0 based indexing
        }
        
        for(int i=0; i<N; i++) {
            if(arr[i] % P < N) {
                arr[arr[i] % P] += P;
            }
        }
        
        for(int i=0; i<N; i++) {
            arr[i] /= P;
        }
    }
};

