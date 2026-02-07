class Solution {
public:
    string longestNiceSubstring(string s) {
        if (s.size() <= 1) return "";

        vector<int> l(26, 0);
        vector<int> u(26, 0);

        // Count lowercase and uppercase
        for (char c : s) {
            if (islower(c)) 
                l[c - 'a']++;
            else if (isupper(c)) 
                u[c - 'A']++;
        }

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            // If lowercase
            if (islower(c)) {
                if (u[c - 'a'] == 0) {
                    string left = longestNiceSubstring(s.substr(0, i));
                    string right = longestNiceSubstring(s.substr(i + 1));
                    return left.size() >= right.size() ? left : right;
                }
            }
            // If uppercase
            else {
                if (l[c - 'A'] == 0) {
                    string left = longestNiceSubstring(s.substr(0, i));
                    string right = longestNiceSubstring(s.substr(i + 1));
                    return left.size() >= right.size() ? left : right;
                }
            }
        }

        return s;
    }
};