class Solution {
public:
    string lexSmallest(string a) {
        string ans = a;
        int n = a.size();

        for (int k = 1; k <= n; k++) {
            string first = a, last = a;
            reverse(first.begin(), first.begin() + k);
            reverse(last.end() - k, last.end());

            ans = min({ans, first, last});
        }
        return ans;
    }
};
