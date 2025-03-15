class Solution {
public:
    int minimumMoves(string s) {
        int d = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X') {
                d++;
                i = i+2;
            }
        }
        return d;
    }
};