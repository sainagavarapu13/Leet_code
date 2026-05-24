class Solution {
public:
    vector<int> limitOccurrences(vector<int>& a, int k) {
        int i = 0;

        for (int x : a) {
            if (i<k || a[i-k] != x) {
                a[i] = x;
                i++;
            }
        }
        vector<int> b(a.begin(), a.begin() + i);
        return b;
    }
};