class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;

        for (int i= 0;i<31;i++) {
            int mask = 1 << i;
            int bitA = (a & mask) ? 1 : 0;
            int bitB = (b & mask) ? 1 : 0;
            int bitC = (c & mask) ? 1 : 0;
            if (bitC== 0) {
                ans += bitA+bitB;
            } else {
                if ((bitA| bitB) == 0)
                    ans++;
            }
        }

        return ans;
    }
};
