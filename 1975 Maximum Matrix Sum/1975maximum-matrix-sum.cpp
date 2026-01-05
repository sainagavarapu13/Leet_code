class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& a) {
        long long  m =100001;
        long long  sum=0;
        int cnt=0;
        for( auto i: a){
            for( int j :i){
                if( j<0){
                        cnt++;
                        sum+=abs(j);
                        m = min(m ,(long long)abs(j));
                }else{
                    sum+=j;
                    m = min(m ,(long long)abs(j));
                }
            }
        }
        if(cnt%2==0){
            return sum;
        }else{
            return ( sum - 2*m);
        }
        
    }
};