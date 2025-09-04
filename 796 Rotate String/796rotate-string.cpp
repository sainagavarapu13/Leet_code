class Solution {
public:
    bool rotateString(string s, string g) {
        if( s.size()!=g.size()) return 0;
        string p = g+g;
        return p.find(s) != string::npos;
    }
};