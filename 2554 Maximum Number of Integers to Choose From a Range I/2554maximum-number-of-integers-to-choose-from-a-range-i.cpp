class Solution {
public:
    int maxCount(vector<int>& a, int n, int k) {
        unordered_set<int>s(a.begin(),a.end());
          int sum = 0, cnt = 0;

        for (int i = 1; i <= n; i++) {
            if (s.count(i)) continue;   

            if (sum + i > k) break;

            sum += i;
            cnt++;
        }
        return cnt;
    }
};