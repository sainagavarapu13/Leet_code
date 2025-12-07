class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>a;
        for( char i : s){
            a.insert(i);
        }
        return a.size();
        
    }
};