class Solution {
public:
    bool check(string s,string b ,  unordered_map<char, unordered_set<char>>& p){
        for( int i=0;i<s.size();i++){
            if( s[i]==b[i]) continue;
            if( p[b[i]].count(s[i])) continue;
            return 0;
        }
        return 1;
    }
    bool matchReplacement(string s, string b, vector<vector<char>>& m) {
        unordered_map<char, unordered_set<char>>p;
        for( auto i :m){
            p[i[0]].insert(i[1]);
        }
        for( int i=0;i<=(int)s.size()-(int)b.size();i++){
            if(check(s.substr(i,(int)b.size()),b,p)) return 1;
        }
        return 0;
    }
};