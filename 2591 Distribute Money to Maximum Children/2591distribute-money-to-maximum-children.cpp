class Solution {
public:
    int distMoney(int m, int c) {
        if( m<c) return -1;
        if( m > c*8) return c-1;
        if( m==c) return 0;
        int ans=0;
        while( m >0 && m-8>=c-1){
            ans++;
            c--;
            m-=8;
        }
         if( c==1 && m==4) ans--;
         return ans;

    }
};