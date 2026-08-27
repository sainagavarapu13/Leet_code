class Solution {
public:
    int accountBalanceAfterPurchase(int n) {
        //return 0;
        int rem = n%10;
        int val = n/10;
        if( rem<5) val*=10;
        else val = (val+1)*10;
        return 100-val;

    }
};