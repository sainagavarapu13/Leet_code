class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string a = s+s;
        string p = a.substr(1,a.size()-2);
        return p.find(s) != string::npos;
    }
};