//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    
	    int first, last, mid, lower, higher;

        first = 0;
        last = n-1;
        lower = n;
        while(first <= last) {
            mid = (first+last)/2;

            if(x == arr[mid]) lower = min(lower, mid);
            if(x > arr[mid]) first = mid+1; 
            else last = mid-1;
        }

        first = 0;
        last = n-1;
        higher = -1;
        while(first <= last) {
            mid = (first+last)/2;

            if(x == arr[mid]) higher = max(higher, mid);
            if(x >= arr[mid]) first = mid+1; 
            else last = mid-1;
        }

        if(lower == n) {
            return 0;
        } else {
            return higher-lower+1;
        }
    
	}
};
