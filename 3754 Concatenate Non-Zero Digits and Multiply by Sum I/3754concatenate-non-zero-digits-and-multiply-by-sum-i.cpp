class Solution {
public:
    long long fun(int n){
         vector<int> digits;
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            if (d != 0) {
                digits.push_back(d);
                sum += d;
            }
            n /= 10;
        }
        long long x = 0;
        for (int i = digits.size() - 1; i >= 0; i--) {
            x = x * 10 + digits[i];
        }

        return x * sum;
    }
    long long sumAndMultiply(int n) {
        return fun(n);
    }
};