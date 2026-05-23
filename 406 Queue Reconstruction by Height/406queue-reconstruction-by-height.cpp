class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& a) {
        vector<vector<int>>n;
        sort( a.begin(), a.end(), []( auto x, auto y){
            if( x[0]==y[0]) return x[1]<y[1];
            return x[0]>y[0];
        });
        for(auto i :a){
           n.insert(n.begin()+i[1],i);
        }
        return n;
    }
};