class Solution {
public:
    int minOperations(vector<int>& a) {
        static vector<int> s = []() {
            vector<int> spf(1e6 + 1);

            for (int i = 0; i <= 1e6; i++)
                spf[i] = i;

            for (int i = 2; i * i <= 1e6; i++) {
                if (spf[i] == i) {
                    for (int j = i * i; j <= 1e6; j += i) {
                        if (spf[j] == j)
                            spf[j] = i;
                    }
                }
            }

            return spf;
        }();
        int cnt = 0;
        for (int i=a.size()-2;i>=0;i--) {
            if (a[i] <= a[i + 1])
                continue;
            if (a[i] == 1 || s[a[i]] == a[i])
                return -1;
            a[i] = s[a[i]];
            cnt++;
            if (a[i] > a[i + 1])
                return -1;
        }
        return cnt;
    }
};