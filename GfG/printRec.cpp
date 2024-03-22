class Solution{
    public:
    void GFG(int i, int n){
        if(i>n){
            return;
        }else{
            cout<<"GFG ";
            GFG(i + 1, n);
        }
    }
    void printGfg(int N) {
        GFG( 1, N);
    }
};