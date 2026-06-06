class Solution {
public:
    bool consecutiveSetBits(int n) {
        int c=0 , p=0;
        int cnt=0;
        while(n){
            c = n&1;
            if( c==1 && p == 1){
                cnt++;
            }
            p = c;
            n >>=1;
            
        } 
        return cnt ==1;
    }
};