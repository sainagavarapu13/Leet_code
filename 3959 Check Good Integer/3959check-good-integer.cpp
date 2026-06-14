class Solution {
public:
    bool checkGoodInteger(int n) {
        long long b = 0,d = 0;
        while(n>0){
            long long c = n%10;
            b += c;
            d += c*c;
            n /=10;
        }
        if((d-b)>=50) return true;
        return false;
    }
};