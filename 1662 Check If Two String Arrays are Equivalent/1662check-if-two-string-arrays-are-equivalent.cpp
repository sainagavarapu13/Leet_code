class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& a, vector<string>& b) {
        string m, n;
        for(const auto& s : a) {
            m += s;
        }
        for(const auto& s : b) {
            n += s;
        }
        return m == n;
    }
};