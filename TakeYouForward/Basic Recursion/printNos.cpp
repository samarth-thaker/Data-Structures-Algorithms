class Solution{
    public:
   
    void func(int i, int n){
        if(i>n){
            return ;
        }
        cout<<i<<" ";
        func(i + 1, n);
    }
    void printNos(int N)
    {
        func(1, N);
    }
    void printNos(int N)
    {
        /* for(int i = 1; i <= N; i++){
            cout<<i<<" ";
        } */
       func(1, n);
    }
};