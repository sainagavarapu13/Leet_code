class Solution {
public:
    bool checkIfPangram(string a) {
        if( a.size()<26) return 0;
        set<char>b;
        for( int i=0;i<a.size();i++){
            b.insert(tolower(a[i]));
        }
        if( b.size()<26) return 0;
        else return 1;
    }
};