class Solution {
public:
    int minimumTeachings(int n, vector<vector<int>>& languages, vector<vector<int>>& friendships) {
        int m = languages.size();
        vector<unordered_set<int>> langSet(m);
        for (int i = 0; i < m; ++i) {
            for (int l : languages[i]) {
                langSet[i].insert(l);
            }
        }

        unordered_set<int> needTeach;
        for (auto& f : friendships) {
            int u = f[0] - 1, v = f[1] - 1;
            bool canCommunicate = false;
            for (int l : langSet[u]) {
                if (langSet[v].count(l)) {
                    canCommunicate = true;
                    break;
                }
            }
            if (!canCommunicate) {
                needTeach.insert(u);
                needTeach.insert(v);
            }
        }

        int res = INT_MAX;
        for (int l = 1; l <= n; ++l) {
            int count = 0;
            for (int u : needTeach) {
                if (!langSet[u].count(l)) {
                    ++count;
                }
            }
            res = min(res, count);
        }

        return res;
    }
};
