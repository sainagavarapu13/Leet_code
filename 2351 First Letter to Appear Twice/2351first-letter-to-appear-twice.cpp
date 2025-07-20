class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char> k;
        for( char c : s){
            if( k.count(c)) return c;
            k.insert(c);
        }
        return -1;
    }
};