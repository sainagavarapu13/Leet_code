class Solution {
public:
    int longestSubsequence(vector<int>& a) {
        int x = 0;
        for (int v:a)
            x^=v;
        if (x!=0)
            return a.size();
        for (int v:a) {
            if (v!=0)
                return a.size()-1;
        }
        return 0;
    }
};