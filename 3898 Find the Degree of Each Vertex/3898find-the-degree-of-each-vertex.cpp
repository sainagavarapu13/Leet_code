class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& m) {
         int n = m.size();
        vector<int> degree(n, 0);
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                count += m[i][j];
            }
            degree[i] = count;
        }

        return degree;
    }
};