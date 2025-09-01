class Solution {
public:
    int equalPairs(vector<vector<int>>& a) {
        vector<vector<int>>b(a.size() , vector<int>(a.size()));
        for( int i=0;i<a.size();i++){
            for( int j=0;j<a.size();j++){
                b[i][j]=a[j][i];
            }
        }
        int cnt =0;
    for(auto& row : a){
        for( auto& r : b){
            bool f = equal( row.begin(),row.end() , r.begin(), r.end());
            if( f==1) cnt++;
        }
    }
    return cnt;
        
    }
};