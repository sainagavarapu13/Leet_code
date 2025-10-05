class Solution {
public:
    int minimumLevels(vector<int>& p) {
    int total = 0, prefix = 0;
    for (int x : p) total += (x == 1 ? 1 : -1);
    for (int i = 0; i < p.size() - 1; ++i) {
        prefix += (p[i] == 1 ? 1 : -1);
        total -= (p[i] == 1 ? 1 : -1);
        if (prefix > total) return i + 1;
    }
    return -1;
}
};