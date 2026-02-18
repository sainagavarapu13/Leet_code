class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n<=2) return true;
        long long a = n>>1;
        long long b = n^a; 
        long long c = b & (b+1);
        return c==0;
    }
};