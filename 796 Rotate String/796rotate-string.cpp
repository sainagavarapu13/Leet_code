class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return 0;
        string ans=s+s;
        if(ans.find(goal)==string::npos) return 0;
        else return 1;
    }
};