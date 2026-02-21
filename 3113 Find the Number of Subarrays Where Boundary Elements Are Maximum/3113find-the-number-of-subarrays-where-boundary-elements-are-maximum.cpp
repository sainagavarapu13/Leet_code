class Solution {
public:
    long long numberOfSubarrays(vector<int>& a) {
        stack<pair<int,long long>>s;
        long long ans=0;
        for( int i : a){
            long long cnt=1;
            while( !(int)s.empty() && s.top().first<i){
                s.pop();
            }
            if( !(int)s.empty() && s.top().first==i){
                cnt = s.top().second+1;
                ans+=cnt-1;
                s.pop();

            }
            s.push({i,cnt});

        }
        return ans+a.size();
    }
};