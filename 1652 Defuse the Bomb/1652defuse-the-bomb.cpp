class Solution {
public:
    vector<int> decrypt(vector<int>& a, int k) {
        int num = k;
        int n = a.size();
        vector<int> res(n, 0);
        if (k == 0) return res;
        if (k < 0) {
            reverse(a.begin(), a.end());
            k = -k;
        }

        vector<long long> po;
        long long sum = 0;

        for (int i : a) {
            sum += i;
            po.push_back(sum);
        }

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int ind = n - i - 1;

            if (ind >= k) {
                ans.push_back((int)(po[i + k] - po[i]));
            } else {
                long long temp = po.back() - po[i];
                int c = (k - ind - 1) % n;
                // if (c < 0) c += n;  
                temp += po[c];
                ans.push_back((int)temp);
            }
        }

        if( num < 0) reverse( ans.begin(),ans.end());
        return ans;
    }
};
