class Solution {
public:
    int minLights(vector<int>& lights) {
        int n = lights.size();
         vector<int> b(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (lights[i] > 0) {
                int l = max(0, i - lights[i]);
                int r = min(n - 1, i + lights[i]);
                b[l]++;
                if (r + 1 < n) b[r + 1]--;
            }
        }
        vector<int> v(n);
        int c = 0;
        for (int i = 0; i < n; i++) {
            c += b[i];
            v[i] = (c > 0);
        }

        int a = 0;

        for (int i = 0; i < n;) {
            if (v[i]) {
                i++;
                continue;
            }

            int m = min(i + 1, n - 1);
            int r = min(n - 1, m + 1);
            a++;
            i = r + 1;
        }

        return a;
    }
};