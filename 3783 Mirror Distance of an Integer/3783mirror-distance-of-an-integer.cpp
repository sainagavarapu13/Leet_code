class Solution {
public:
    int mirrorDistance(int n) {
        int re=0;
        int k = n;
        while( n){
            re= re*10+(n%10);
            n/=10;
        }
        return abs( re-k);
        
        
    }
};