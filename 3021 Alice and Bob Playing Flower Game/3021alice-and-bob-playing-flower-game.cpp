class Solution {
public:
    long long flowerGame(int n, int m) {
        long long o1 = (n/2)+n%2;
        long long e1 = (n/2);
        long long o = (m/2)+(m%2);
        long long e = m/2;
        long long total = (o * e1)+(o1 * e);
        return total;
    }
};