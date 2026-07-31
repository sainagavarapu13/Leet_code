class Solution {
public:
    int minimumPushes(string w) {
        vector<int> x(26, 0);
        for (char c : w) {
            x[c - 'a']++;}
        sort(x.rbegin(), x.rend());
        
        int total = 0;
        for (int i=0;i<26; i++) {
            if (x[i] == 0) break;
            int pos = i / 8 + 1;
            total += x[i] * pos;
        }
        
        return total;
    }
};