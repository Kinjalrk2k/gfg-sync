class Solution{
    public:
    //Complete this function
    void printNos(int N)
    {
        //Your code here
        if(N == 1) {
            cout<<N<<" ";
            return;
        }
        
        printNos(N-1);
        cout<<N<<" ";
    }
};
