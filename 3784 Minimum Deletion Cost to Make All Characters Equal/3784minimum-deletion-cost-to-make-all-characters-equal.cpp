class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        map<char,long long> m;
        for(long long i=0;i<s.length();i++){
            m[s[i]] +=cost[i];
        }
        vector<pair<char,long long>> v(m.begin(),m.end());
        if(v.size()==1) return 0;
        sort(v.begin(),v.end(),[](pair<char,long long>a,pair<char,long long> b){
            if(a.second==b.second){
                return (a.first<b.first);
            }
            return a.second<b.second;
        });
        long long cnt = 0;
        for(long long i=0;i<v.size()-1;i++){
            cnt += v[i].second;
        }
        return cnt;
    }
};