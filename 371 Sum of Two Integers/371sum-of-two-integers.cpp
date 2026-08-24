class Solution {
public:
    int getSum(int a, int b) {
        int ans = 0;
        int carry = 0;
        unsigned int k = 1;

        while (k) {
            int la = a & k;
            int lb = b & k;

            if ((la != 0) ^ (lb != 0) ^ carry)
                ans |= k;

            carry = ((la != 0) & (lb != 0)) |
                    ((lb != 0) & carry) |
                    ((la != 0) & carry);

            k <<= 1;
        }

        return ans;
    }
};