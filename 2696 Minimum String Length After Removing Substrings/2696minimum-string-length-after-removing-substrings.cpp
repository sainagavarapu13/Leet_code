class Solution {
public:
    int minLength(string s) {
        string a;
        for( char i : s){
            if( i=='B' && !a.empty() && a.back()=='A') a.pop_back();
            else if( i=='D' && !a.empty() && a.back()=='C') a.pop_back();
            else a.push_back(i);

        }
        return a.size();
    }
};