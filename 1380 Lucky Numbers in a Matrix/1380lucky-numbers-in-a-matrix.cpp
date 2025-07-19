#include <vector>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& m) {
        vector<int> minRows, maxCols, luck;
        int row = m.size();
        if (row == 0) return luck;
        int col = m[0].size();

        for (int i = 0; i < row; ++i) {
            int mini = INT_MAX;
            for (int j = 0; j < col; ++j) {
                if (m[i][j] < mini) {
                    mini = m[i][j];
                }
            }
            minRows.push_back(mini);
        }
        for (int j = 0; j < col; ++j) {
            int maxi = INT_MIN;
            for (int i = 0; i < row; ++i) {
                if (m[i][j] > maxi) {
                    maxi = m[i][j];
                }
            }
            maxCols.push_back(maxi);
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (m[i][j] == minRows[i] && m[i][j] == maxCols[j]) {
                    luck.push_back(m[i][j]);
                }
            }
        }

        return luck;
    }
};