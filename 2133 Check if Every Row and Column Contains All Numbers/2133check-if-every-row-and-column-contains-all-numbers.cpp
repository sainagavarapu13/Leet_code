class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int flg =0;
        
        for( int i=0;i<m.size();i++){
            unordered_set<int>a;
         unordered_set<int>b;
            for( int j =0;j<m.size();j++){
                a.insert(m[i][j]);
                b.insert(m[j][i]);
            }
            if( a.size()!=m.size() || b.size()!=m.size() ){
                return 0;
            }
        }
        return 1;

        
    }
};