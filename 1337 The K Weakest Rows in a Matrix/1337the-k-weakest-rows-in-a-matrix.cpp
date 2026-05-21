class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& a, int k) {
        vector<pair<int,int>>b;
        int l=0;
        for( auto i : a){
            int cnt=0;
            for( int j : i){
                if( j ==1) cnt++;
            }
            b.push_back({cnt , l});
            l++;
        }
        sort( b.begin() ,b.end());
        vector<int>res;
        for( int i=0;i<k;i++){
            res.push_back(b[i].second);
        }
        return res;
        
    }
};