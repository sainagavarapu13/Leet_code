class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int b = 0;
        if (num1 < num2) return -1;
        else if (num1 == 0) return 0;
        else {
            for (int x = 1; x <= 60; x++) {
                long long S = (long long)num1 - (long long)num2 * x;
                if (S < x) continue;
                int bits = __builtin_popcountll(S);
                if (bits <= x) return x;
            }
        }
        return -1;
    }
};