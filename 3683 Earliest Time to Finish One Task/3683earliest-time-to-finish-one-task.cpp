class Solution {
public:
    int earliestTime(vector<vector<int>>& t) {
       int m = INT_MAX;
        for( auto& r :t){
            int k = r[0]+r[1];
            m = min( m ,k);
        }
        return m;
    }
};