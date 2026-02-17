
class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& m) {
        vector<int> powers;
        int cnt = 0;
        while (n) {
            if (n % 2 != 0) {
                powers.push_back(1LL << cnt); 
            }
            cnt++;
            n = n / 2;
        }
        vector<int> res;
        for (int i = 0; i < m.size(); i++) {
            int p = 1;
            for (int j = m[i][0]; j <= m[i][1]; j++) {
                p = ((long long)p * powers[j]) % 1000000007; 
            }
            res.push_back(p);
        }
        return res;
    }
};


