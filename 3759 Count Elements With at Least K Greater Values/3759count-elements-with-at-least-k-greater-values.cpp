class Solution {
public:
    int countElements(vector<int>& a, int k) {
        int n = a.size();
        if (n == 0) return 0;

        sort(a.begin(), a.end());

        int result = 0;

        for (int i = 0; i < n; i++) {
            
            int last = upper_bound(a.begin(), a.end(), a[i]) - a.begin();
            int greater = n - last;  

            if (greater >= k)
                result++;
        }

        return result;
    }
};
