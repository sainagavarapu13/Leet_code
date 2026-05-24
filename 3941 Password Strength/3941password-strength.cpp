class Solution {
public:
    int passwordStrength(string a) {
        set<char> s;
        vector<int> b(4, 0);
        for (char c : a) {
            if (s.count(c)) continue;
            s.insert(c);
            if (c >= 'a' && c <= 'z') b[0]++;
            else if (c >= 'A' && c <= 'Z') b[1]++;
            else if (c >= '0' && c <= '9') b[2]++;
            else b[3]++;
        }

        int cnt = 0;

        cnt += b[0] * 1;
        cnt += b[1] * 2;
        cnt += b[2] * 3;
        cnt += b[3] * 5;
        return cnt;
    }
};