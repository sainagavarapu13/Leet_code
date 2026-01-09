class Solution {
public:
    int smallestNumber(int n) {
        int k=n;
        int ma =0;
        while(k){
            ma = (ma<<1)|1;
            k>>=1;
        }
        
        return ma;
    }
};