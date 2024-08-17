class Solution {
  public:
    long long sumOfSeries(long long n) {
        if(n==1){
            return 1;
        }
        else return n*n*n + sumOfSeries(n - 1);
    }
};