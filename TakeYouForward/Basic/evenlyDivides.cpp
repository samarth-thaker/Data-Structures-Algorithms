class Solution{
public:
    int evenlyDivides(int N){
        int n = N;
    vector<int> digits;
    while (N > 0) {
        int rem = N % 10;
        digits.push_back(rem);
        N = N / 10;
    }
    int count = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (digits[i] != 0 && n % digits[i] == 0) {
            count++;
        }
    }
    return count;
    }
};