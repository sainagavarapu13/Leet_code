class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        map<int , int>m;
        m[0]++;
        int sum=0;
        int cnt=0;
        for( int i=0;i<a.size();i++){
            sum+=a[i];
            int d = sum-k;
            if( m[d]) cnt+=m[d];
            m[sum]++;
        }
        return cnt;
    }
};