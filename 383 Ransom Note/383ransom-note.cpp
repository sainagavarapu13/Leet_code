class Solution {
public:
    bool canConstruct(string a, string b) {
        map<char , int>m1,m2;
        for( char i : a) m1[i]++;
        for( char i : b) m2[i]++;
       for( auto[x,y]:m1){
        if( !m2.count(x)) return 0;
        if( m2[x]<y) return 0;
       }
    return 1;
    }
};