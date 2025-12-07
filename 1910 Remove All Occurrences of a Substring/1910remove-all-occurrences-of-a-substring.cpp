class Solution {
public:
    string removeOccurrences(string s, string p) {
        string a;
        int l = p.size();
        char tar = p.back();
        for(char c : s){
            a.push_back(c);
            if(c == tar && a.size() >= l){
                if(a.substr(a.size() - l, l) == p){
                    a.erase(a.size() - l, l);
                }
            }
        }
        return a;
    }
};
