class Solution {
public:
    bool hasMatch(string s, string p) {
        int f = p.find('*');
        string b = p.substr( 0,f);
        string c = p.substr(f+1);
        auto i = s.find(b);
        auto j = s.rfind(c);
        if( i!=-1 && j!=-1 && i+b.size()<=j) return 1;
        else return 0;

    }
};