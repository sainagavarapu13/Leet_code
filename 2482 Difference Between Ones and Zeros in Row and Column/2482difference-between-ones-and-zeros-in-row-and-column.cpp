class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();

        vector<int> rowOnes(n, 0), colOnes(m, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 1) {
                    rowOnes[i]++;
                    colOnes[j]++;
                }
            }
        }

        vector<vector<int>> ans(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int r1 = rowOnes[i];
                int r0 = m - r1;
                int c1 = colOnes[j];
                int c0 = n - c1;

                ans[i][j] = r1 + c1 - r0 - c0;
            }
        }

        return ans;
    }
};
