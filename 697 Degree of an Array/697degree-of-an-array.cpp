class Solution {
public:
    int findShortestSubArray(vector<int>& a) {
        map<int ,pair<int , vector<int>>>c;
        for( int i=0;i<a.size();i++){
            c[a[i]].first++;
            c[a[i]].second.push_back(i);
        }
        vector<int>sto;
        int m = INT_MIN;
        for( auto&[x,y]:c){
           m = max(m, y.first);
        }
        int mi = INT_MAX;
        for( auto& [x,y]:c){
            if ( y.first==m){
                mi = min( mi , (y.second.back()-y.second[0]+1));
            }
        }
        return mi;
    }
};