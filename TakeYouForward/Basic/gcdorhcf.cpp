 class Solution{
 public:
  long long hcf(long long a, long long b){
      if(a%b==0){
        return b;
          
      }else{
          return hcf(a, a%b);
      }
  }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        vector<long long> ans;
        long long gcd, lcm;
        gcd = hcf(A, B);
        lcm = A * B/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};