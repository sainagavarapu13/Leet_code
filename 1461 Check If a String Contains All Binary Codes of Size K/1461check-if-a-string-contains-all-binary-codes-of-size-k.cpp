class Solution {
public:
    bool hasAllCodes(string a, int k) {
        if( (int)a.size()-k+1 < ((1<<k))) return 0;
        set<string>s;
        for( int i=0;i<=a.size()-k;i++){
            s.insert(a.substr(i,k));
        }
        if( s.size() ==((1<<k))) return 1;
        else return 0;

    }
};