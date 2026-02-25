class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int pr=1;
        int temp = n;
        while( n){
            sum+=(n%10);
            pr*=(n%10);
            n/=10;
        }
        return temp%(sum+pr)==0;
    }
};