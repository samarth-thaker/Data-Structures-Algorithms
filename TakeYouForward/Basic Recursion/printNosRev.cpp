class Solution{
     void func(int n, int i){
      if(n<i){
          return;
      }
      cout<<n<<" ";
      func(n - 1, i);
  }
    void printNos(int N) {
        func(N, 1);
    }
};