class Solution {
public:
    vector<int> findGoodIntegers(int n) {
       unordered_map<int, int> a;

    int b = cbrt(n);

    for (int c = 1; c <= b; c++) {
        int d = c*c*c;
        for (int e = c; e <= b; e++) {
            int f = d + e*e*e;
            if (f > n) break;
            a[f]++;
        }
    }

    vector<int> g;

    for (auto h : a) {
        if (h.second >= 2)
            g.push_back(h.first);
    }

    sort(g.begin(), g.end());
 return g;
    }
};