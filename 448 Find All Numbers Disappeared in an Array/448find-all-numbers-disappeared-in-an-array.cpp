class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& a) {
        sort(a.begin(), a.end());
        vector<int> ans;
        int k = 1;
        int n = a.size();
        for (int i = 0; i < n; i++) {
            if (a[i] == k) {
                k++;
            }
            else if (a[i] > k) {
                while (k < a[i]) {
                    ans.push_back(k);
                    k++;
                }
                k++;
            }
        }
        while (k <= n) {
            ans.push_back(k);
            k++;
        }

        return ans;
    }
};
