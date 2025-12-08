class Solution {
public:
    int countTriples(int n) {
        int cnt=0;
        for( int i=1;i<=n;i++){
            for( int j=1;j<=n;j++){
                if( i !=j){
                    long long k = sqrt(i*i + j*j);
                   if(i*i + j*j == k*k && k <=n ) cnt++;

                    
                }
            }
        }
        return cnt;
        
    }
};