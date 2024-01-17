//Check if a number is power of 2;
#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n){
    for(int i=0; i<=30; i++){
        int ans = pow(2, i);
        if(ans==n){
            return true;
        }
    }
 return false;   
}
int main(){
    int n = 6;
    bool truth = isPowerOfTwo(n);
    cout<<truth;
    truth = isPowerOfTwo(16);
    cout<<truth;
}