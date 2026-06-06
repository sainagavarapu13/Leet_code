class Solution {
public:
    long long numberOfSubarrays(vector<int>& a) {
        stack<pair<int , long long>>st;
        long long ans=0;
        for(auto& i:a){
            long long cnt=1;
            while(!st.empty()&&st.top().first<i){
                st.pop();
            }
            if(!st.empty()&&st.top().first==i){
                cnt = st.top().second+1;
                ans+=cnt-1;
                st.pop();
            }
            st.push({i,cnt});
        }
        return a.size()+ans;
    }
};