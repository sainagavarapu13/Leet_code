class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& a) {
        vector<pair<int,pair<int,int>>>b;
        for(auto i:a){
            b.push_back({i[0]-i[1],{i[0],i[1]}});
        }
        sort( b.begin(),b.end(),[](auto x,auto y){
            return x.first<y.first;
        });
        int ans=0;
        for( int i=0;i<a.size()/2;i++){
            ans+=b[i].second.first;
        } for( int i=a.size()/2;i<a.size();i++){
            ans+=b[i].second.second;
        }
        return ans;
    }
};