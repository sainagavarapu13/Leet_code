class Solution {
public:
    long long modPow( long long base , long long exp , int mod ){
        long long res = 1;
        while( exp ){
            if( exp & 1 ) res = ( res * base ) % mod;
            base = ( base * base ) % mod;
            exp >>= 1;
        }
        return res;
    }

    vector<int> productQueries( int n , vector<vector<int>>& queries ) {
        int mod = 1e9+7;
         vector<int >a;
        for( int i=0 ;i<=31;i++ ){
            if( n &(1<<i)) a.push_back((i));
        }
        vector<long long>pre( a.size()+1 , 0 );
        for( int i=0;i<a.size();i++ ){
            pre[i+1] = ( pre[i] + a[i] );
        }
        vector<int>res;
        for( auto &i: queries ){
                res.push_back((int)modPow( 2 ,( pre[i[1]+1] - pre[i[0]] ) , mod ));
        }
        return res;
    }
};
