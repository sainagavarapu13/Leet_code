class Solution {
public:
    long long minEnergy(int n, int b, vector<vector<int>>& a) {
        sort( a.begin(), a.end());
        long long s = a[0][0];
        long long e = a[0][1];
        long long len =0;
        for( int i =1;i<a.size();i++){
            if( e+1>=a[i][0]){
                e =max( e, (long long)a[i][1]);
            }else{
                len+= (e-s+1);
                e = a[i][1];
                s = a[i][0];
            }
            
            
        }
         len+= (e-s+1);
          long long bulbs = (b + 2) / 3;
        return bulbs * len;
        
    }
};