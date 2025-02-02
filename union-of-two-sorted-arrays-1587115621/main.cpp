class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> result;
        
        int len = min(n, m);
        int i, j;
        for(i = 0, j = 0; i<len || j<len;) {
            if(arr1[i] <= arr2[j]) {
                // cout<<result.back();
                if(!result.size()) result.push_back(arr1[i]);
                if(result.back() < arr1[i]) {
                    result.push_back(arr1[i]);
                }
                i++;
            } else {
                // cout<<result.back();
                if(!result.size()) result.push_back(arr2[j]);
                if(result.back() < arr2[j]) {
                    result.push_back(arr2[j]);
                }
                j++;
            }
        }
        
        if(i < n) {
            for(; i<n; i++) {
                if(result.back() < arr1[i]) {
                    result.push_back(arr1[i]);
                }
            }
        }
        
        if(j < m) {
            for(; j<m; j++) {
                if(result.back() < arr2[j]) {
                    result.push_back(arr2[j]);
                }
            }
        }
        
        // for(auto i: result) {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
        
        return result;
    }
};
