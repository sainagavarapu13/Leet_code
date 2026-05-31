class Solution {
public:
    int digitFrequencyScore(int n) {
        int feq[10],res = 0;
        while(n>0){
            int b = n%10;
            feq[b]++;
            n /=10;
        }
        for(int i=0;i<10;i++){
            res += i*feq[i];
        }
        return res;
    }
};