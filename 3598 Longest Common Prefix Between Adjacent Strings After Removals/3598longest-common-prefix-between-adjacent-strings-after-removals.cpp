class Solution {
public:
    int fun( string a, string b){
        int len = min( a.size(),b.size());
        int i=0;
        while( i<len && a[i]==b[i]) i++;
        return i;
    }

    vector<int> longestCommonPrefix(vector<string>& w) {
       int n = w.size();
       if( n<=2){
            return vector<int>( n , 0);
       }

       vector<int>aj(n-1),pre(n-1),su(n-1),ans;

       for( int i=0;i<n-1;i++){
            aj[i]=fun(w[i],w[i+1] );
       }

        pre[0]=aj[0];
        for( int i=1;i<n-1;i++){
            pre[i]=max( pre[i-1],aj[i]);
        }

        su[n-2]=aj[n-2];
        for( int i=n-3;i>=0;i--){
            su[i]=max( su[i+1],aj[i]);
        }

        for( int i=0;i<n;i++){
            int b =0;

            if( i-2>=0){
                b =max( b , pre[i-2]);
            }

            if( i+1<=n-2){
                b =max( b , su[i+1]);
            }

            if( i-1>=0 && i+1 <n){
                b = max( b , fun( w[i-1],w[i+1]));
            }

            ans.push_back(b);
        }

        return ans;
    }
};