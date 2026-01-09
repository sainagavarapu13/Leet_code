class Solution {
public:
    int minimumTime(string s) {
        int n = s.size();
        if( n==1 ) return s[0]=='1';

        vector<int>l(n,0),r(n,0);

        if( s[0]=='1' ) l[0]=1;
        for( int i=1;i<n;i++ ){
            if( s[i]=='1' ){
                l[i]= min( l[i-1]+2 , i+1 );
            }
            else l[i]= l[i-1];
        }

        if( s[n-1]=='1' ) r[n-1]=1;
        for( int i=n-2;i>=0;i-- ){
            if( s[i]=='1' ){
                r[i]= min( r[i+1]+2 , n-i );
            }
            else r[i]= r[i+1];
        }

        int ans = min( l[n-1] , r[0] );
        for( int i=0;i<n-1;i++ ){
            ans = min( ans , l[i]+r[i+1] );
        }
        return ans;
    }
};
