class Solution
{
public:
    vector<long long> factorialNumbers(long long N) {
    vector<long long> arr;
    long long factorial = 1;
    
    for(long long i = 1; ; i++) {
        if (factorial > N) break;
        arr.push_back(factorial);
        if (factorial > N / (i + 1)) break;  // Avoid overflow in the next step
        factorial *= (i + 1);
    }
    
    return arr;
}
};