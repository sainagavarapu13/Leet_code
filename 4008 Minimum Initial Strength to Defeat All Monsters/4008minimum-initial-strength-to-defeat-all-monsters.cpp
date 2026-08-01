class Solution {
public:
    bool check(long long s, vector<int>& monsters, vector<long long>& bonus) {
        long long cur = s;

        for (int i = 0; i < monsters.size(); i++) {
            if (cur + bonus[i] < monsters[i])
                return false;

            cur -= monsters[i];
            if (cur < 0)
                cur = 0;
        }

        return true;
    }

    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        int n = monsters.size();

        vector<long long> diff(n + 1, 0);

        for (auto &b : boosts) {
            diff[b[0]] += b[2];
            if (b[1] + 1 < n)
                diff[b[1] + 1] -= b[2];
        }

        vector<long long> bonus(n, 0);
        bonus[0] = diff[0];
        for (int i = 1; i < n; i++)
            bonus[i] = bonus[i - 1] + diff[i];

        long long l = 0, r = 0;

        for (int x : monsters)
            r += x;

        while (l < r) {
            long long mid = (l + r) / 2;

            if (check(mid, monsters, bonus))
                r = mid;
            else
                l = mid + 1;
        }

        return l;
    }
};