class Solution {
public:
    double x(int y, int z) {
        return (double)(y + 1) / (z + 1) - (double)(y) / z;
    }
    double maxAverageRatio(vector<vector<int>>& s, int e) {
        priority_queue<tuple<double, int, int>> r;
        for (auto& t : s) {
            r.push({x(t[0], t[1]), t[0], t[1]});
        }
        while (e--) {
            auto [u, y, z] = r.top();
            r.pop();
            y++;
            z++;
            r.push({x(y, z), y, z});
        }
        double u = 0.0;
        while (!r.empty()) {
            auto [y, z, e] = r.top();
            u += (double)(z) / e;
            r.pop();
        }
        return u / s.size();
    }
};