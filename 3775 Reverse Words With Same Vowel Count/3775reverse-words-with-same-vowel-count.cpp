class Solution {
public:
    string reverseWords(string s) {
        set<char> v = {'a','e','i','o','u'};
        vector<string> w;
        string temp = "";
        for (char c : s) {
            if (c == ' ') {
                w.push_back(temp);
                temp = "";
            } else {
                temp += c;
            }
        }
        w.push_back(temp);
        int cnt = 0;
        for (char c : w[0]) {
            if (v.count(c)) cnt++;
        }

        for (int i = 1; i < w.size(); i++) {
            int c = 0;
            for (char ch : w[i]) {
                if (v.count(ch)) c++;
            }
            if (c == cnt) {
                reverse(w[i].begin(), w[i].end());
            }
        }

        string result = "";
        for (int i = 0; i < w.size(); i++) {
            result += w[i];
            if (i != w.size() - 1)
                result += " ";
        }

        return result;
    }
};
