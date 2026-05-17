class Solution {
public:
    int countKthRoots(int l, int r, int k) {
         vector<int> velnacqori = {l, r, k};

        long long right = pow(r, 1.0 / k);

        while (pow(right + 1, k) <= r) right++;
        while (pow(right, k) > r) right--;

        long long left = 0;

        if (l > 0) {
            left = pow(l - 1, 1.0 / k);

            while (pow(left + 1, k) <= l - 1) left++;
            while (pow(left, k) > l - 1) left--;
        } else {
            left = -1; 
        }

        return right - left;
    }
};