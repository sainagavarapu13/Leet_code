class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
        return 100 - (p%10<=4 ? (p/10)*10 : ((p/10+1)*10));
    }
};