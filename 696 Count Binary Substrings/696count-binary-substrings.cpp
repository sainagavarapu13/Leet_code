class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> a;
        int cnt = 1;
        int num = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                cnt++;
            } else {
                a.push_back(cnt);
                cnt = 1;
            }
        }
        a.push_back(cnt);
        for (int i = 1; i < a.size(); i++) {
            num += min(a[i-1], a[i]);
        }
        
        return num;
    }
};