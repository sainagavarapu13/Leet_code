class Solution {
public:
    long long countSubarrays(vector<int>& a, int k) {
        map<int,int>m;
        int ma = *max_element(a.begin(),a.end());
        int j=0;
        long long cnt=0;
        for( int i=0;i<a.size();i++){
            m[a[i]]++;
            if( m[ma]>=k){
                while( j<a.size() && m[ma]>=k){
                    m[a[j++]]--;
                }
            }
            cnt+=j;
        }
        return cnt;
    }
};