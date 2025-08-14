class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if (s.empty()) return "";
        
        string a = s[0];
        
        for (int i = 1; i < s.size(); i++) {
            int j = 0;
            while (j < a.size() && j < s[i].size() && a[j] == s[i][j]) {
                j++;
            }
            a = a.substr(0, j);
            if (a.empty()) break;  
        }
        
        return a;
    }
};