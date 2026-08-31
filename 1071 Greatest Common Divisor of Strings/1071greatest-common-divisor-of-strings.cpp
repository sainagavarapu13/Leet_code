class Solution {
public:
    string gcdOfStrings(string a, string b) {
        if(a+b != b+a ) return "";
        int g = gcd( (int)a.size(), (int)b.size());
        return a.substr(0,g);
    }
};