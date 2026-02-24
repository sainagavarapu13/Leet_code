class Solution {
public:
    bool checkDivisibility(int n) {
        long long prod = 1,add = 0,O = n;
        while(n>0){
            int b = n%10;
            prod *=b;
            add +=b;
            n /=10;
        }
        long long res = prod + add;
        return (O%res==0);
    }
};