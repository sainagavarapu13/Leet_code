class Solution {
public:
    bool hasMatch(string s, string p) {
        int star = p.find('*');
        string prefix = p.substr(0, star);
        string suffix = p.substr(star + 1);
        
        int pos = s.find(prefix);
        if (pos == string::npos) return false;
        
        return s.find(suffix, pos + prefix.size()) != string::npos;
    }
};