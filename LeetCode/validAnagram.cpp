class Solution {
public:
string sortString(string str) {
    // Sort the characters of the string
    sort(str.begin(), str.end());
    return str;
}

    bool isAnagram(string s, string t) {
        string u = sortString(s);
        string v = sortString(t);
        if(u==v){
            return true;
        }else{
            return false;
        }

    }
};