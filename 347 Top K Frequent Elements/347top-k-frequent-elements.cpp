class Solution {
public:
    vector<int> topKFrequent(vector<int>& n, int k) {
        if(n.size() == k) return n;
        map<int, int> a;
        for(int i : n) a[i]++;
        vector<pair<int, int>> b(a.begin(), a.end());
        sort(b.begin(), b.end(), [](auto& x, auto& y) {
            return x.second > y.second;
        });
        vector<int> c;
        for(int i = 0; i < k; ++i) {
            c.push_back(b[i].first);
        }
        return c;
    }
};