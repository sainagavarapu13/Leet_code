class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int cx = center[0], cy = center[1];
    int bestQ = -1;
    vector<int> ans = {-1, -1};

    for (auto &t : towers) {
        int x = t[0], y = t[1], q = t[2];
        int manhattan = abs(x - cx) + abs(y - cy);

        if (manhattan <= radius) {
            if (q > bestQ ||
               (q == bestQ && (ans[0] == -1 || x < ans[0] || (x == ans[0] && y < ans[1])))) {
                bestQ = q;
                ans = {x, y};
            }
        }
    }
    return ans;
        
    }
};