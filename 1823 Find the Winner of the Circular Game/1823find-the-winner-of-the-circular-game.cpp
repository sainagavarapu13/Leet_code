class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> a;
        for (int i = 1; i <= n; i++) {
            a.push_back(i);
        }

        int idx = 0;

        while (a.size() > 1) {
            int rem = (idx + k - 1) % a.size();
            a.erase(a.begin() + rem);

            idx = rem;
        }

        return a[0];
    }
};