class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int ca = 0, cb = 0;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        
        for(int i = 0; i < n / 2; ++i) {
            if(vowels.count(s[i])) ca++;
            if(vowels.count(s[n / 2 + i])) cb++;
        }
        
        return ca == cb;
    }
};
