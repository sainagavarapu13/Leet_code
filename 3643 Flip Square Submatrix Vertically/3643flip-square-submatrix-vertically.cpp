class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& g, int x, int y, int k) {
        int top = x;
        int bottom = x+k-1;

        while (top<bottom) {
            for (int col = y; col < y + k; col++) {
                swap(g[top][col], g[bottom][col]);
            }
            top++;
            bottom--;
        }

        return g;
    }
};