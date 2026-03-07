class Solution {
public:
   int minimumTotal(vector<vector<int>>& a) {
    for (int i = a.size() - 2; i >= 0; i--) {
        for (int j = 0; j < a[i].size(); j++) {
            int b = a[i + 1][j];
            int r = a[i + 1][j + 1];
            a[i][j] += min(b, r);

        }
    }

    return a[0][0];
}
};