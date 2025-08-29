class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<pair<int , int >>a;
        for( int i=0;i<g.size();i++){
            a.push_back({g[i],i});
        }
        sort(a.begin(),a.end(),[](auto& x, auto& y){
            return x.first < y.first;
        });
        vector<vector<int>>res;
        for( int i=0;i<a.size();){
            int cnt = a[i].first;
            vector<int>b;
            while( cnt--){
                    b.push_back(a[i].second);
                    i++;
            }
            res.push_back(b);

        }
        return res;
    }
};