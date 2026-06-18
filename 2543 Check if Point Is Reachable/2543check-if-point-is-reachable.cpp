class Solution {
public:
    bool isReachable(int x, int y) {
        int gcd = __gcd(x, y );
        return (gcd&(gcd-1))==0;
    }
};