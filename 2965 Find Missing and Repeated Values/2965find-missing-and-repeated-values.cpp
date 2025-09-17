class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size() * grid[0].size();
        vector<int> freq(n + 1, 0);

        for (const auto& row : grid) {
            for (int val : row) {
                freq[val]++;
            }
        }

        int repeated = -1, missing = -1;
        for (int i = 1; i <= n; ++i) {
            if (freq[i] == 0) missing = i;
            else if (freq[i] > 1) repeated = i;
        }

        return {repeated, missing};
    }
};