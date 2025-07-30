class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
       vector<pair<int,int>>b;
       for( int i=0;i<h.size();i++){
        b.push_back({h[i],i});
       }
       sort(b.begin(),b.end(),[](auto& x,auto&y){
            return x.first > y.first;
       });
       vector<string >res;
        for( auto& i:b){
            int k = i.second;
                res.push_back(n[k]);
        }

        return res;
    }
};