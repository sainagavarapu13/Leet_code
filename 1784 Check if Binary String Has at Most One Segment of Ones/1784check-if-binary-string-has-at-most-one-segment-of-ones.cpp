class Solution {
public:
    bool checkOnesSegment(string s) {
        if(s.size() == 1 && s[0] == '1') return true;
        int cnt = 0;
        bool found = false;
        
        for(char i : s) {
            if(i == '1') {
                if(found) {
                    return false;
                }
                cnt++;
            } else {
                found= true;
            }
        }
        
        return true;
    }
};