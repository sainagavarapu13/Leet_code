class Solution {
public:
    vector<int> findXSum(vector<int>& a, int k, int x) {
        int s = 0, e = k;
        vector<int> ans;
        map<int, int> m;
        for (int i = 0; i < k; i++) {
            m[a[i]]++;
        }

        vector<pair<int,int>> v(m.begin(), m.end());
        sort(v.begin(), v.end(), [](auto &x, auto &y) {
            if (x.second == y.second)
                return x.first > y.first;
            return x.second > y.second;
        });

        int cnt = 0;
        for (int i = 0; i < min(x, (int)v.size()); i++) {
            cnt += v[i].first * v[i].second;
        }
        ans.push_back(cnt);

        while (e < a.size()) {
            m[a[s]]--;
            if (m[a[s]] == 0) m.erase(a[s]);
            s++;

            m[a[e]]++;
            e++;

            vector<pair<int,int>> u(m.begin(), m.end());

            sort(u.begin(), u.end(), [](auto &x, auto &y) {
                if (x.second == y.second)
                    return x.first > y.first;
                return x.second > y.second;
            });

            int cnt = 0;
            for (int i = 0; i < min(x, (int)u.size()); i++) {
                cnt += u[i].first * u[i].second;
            }
            ans.push_back(cnt);
        }

        return ans;
    }
};
