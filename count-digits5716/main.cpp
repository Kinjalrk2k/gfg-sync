class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int num = N, count = 0;
        while(num>0) {
            int digit = num % 10;
            
            // as digit zero causes division by 0 error (SIGFPE)
            if(digit != 0 && N%digit == 0) {
                count++;
            } 
            num /= 10;
        }
        
        return count;
    }
};
