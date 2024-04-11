
#include<bits/stdc++.h>
using namespace std;


    int reverse(int x) {
            long long int ans = 0;
            while(x!=0){
                int digit = x%10;
                ans = ans*10 + digit;
                x = x/10;
            }
            if(ans>INT_MAX  || ans<INT_MIN){
                return 0;
            }
            return ans;

    }
    int main(){
        int n = 546;
        int r = reverse(n);
        cout<<r;
        return 0;
    }