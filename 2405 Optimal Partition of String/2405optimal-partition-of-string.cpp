class Solution {
public:
    int partitionString(string s) {
        int count = 1;
        vector<bool> seen(26, false);
        
        for (char c : s) {
            int idx = c - 'a';
            if (seen[idx]) {
                count++;
                fill(seen.begin(), seen.end(), false);
            }
            seen[idx] = true;
        }
        
        return count;
    }
};