class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for (int i = 0; i < s.length(); i++) {
            char c = tolower(s[i]);
            if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) { 
                res.push_back(c);
            }
        }
        int st = 0;
        int e = res.length() - 1;
        while (st <= e) {
            if (res[st] != res[e]) return false;
            st++;
            e--;
        }
        return true;
    }
};