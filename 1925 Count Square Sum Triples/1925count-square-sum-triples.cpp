class Solution {
public:
    int sq(int n){
        int q=sqrt(n);
        if(q*q==n){
            return q;
        }
        return -1;
    }
    int countTriples(int n) {
        int i,j,cnt=0;
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==j) continue;
                int s=(i*i)+(j*j);
                int k=sq(s);
             if(k!=-1){
               if(k<=n){
                cnt++;
               }
             }
            }
        }
        return cnt;
    }
};