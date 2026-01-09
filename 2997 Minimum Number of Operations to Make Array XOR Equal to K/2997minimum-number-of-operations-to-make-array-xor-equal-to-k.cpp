class Solution {
public:
    int minOperations(vector<int>& a, int k) {
        int val = a[0];
        for(int i=1;i<a.size();i++){
            val^=a[i];
        }
        int m = max( k , val);
        int cnt=0;
        while( m){
            m>>=1;
            cnt++;
        }
        int mask =1;
        int ans=0;
        while(cnt--){
            if( (val&mask)!=(k&mask)) ans++;
            mask<<=1;
        }
        return ans;
    }
};