class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& a, int x, int y, int k) {
        for (int i = 0; i < k / 2; ++i) {
            int topRow = x + i;
            int bottomRow = x + k - 1 - i;
            for (int j = 0; j < k; ++j) {
                swap(a[topRow][y + j], a[bottomRow][y + j]);
            }
        }
        return a;
    }
};
