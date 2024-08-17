class Solution {
public:
    int reverse(int x){
       long long int sum=0;
        while(x>0){
            int digit = x%10;;
            sum = sum*10 + digit;
            x = x/10;
        }
        return sum;
    }
    bool isPalindrome(int x) {
        int rev = reverse(x);
        if(rev==x){
            return true;
        }else{
            return false;
        }
    }
};