class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& a, vector<int>& ni ) {
        vector<vector<int>> ans(a.begin(),a.end() );
        ans.push_back( ni);
        vector<vector<int>> res;
        sort( ans.begin(),ans.end());
        int s = ans[0][0];
        int e = ans[0][1];
        for( int i=1;i<ans.size();i++){
            if( ans[i][0]<=e){
                    e = max( e, ans[i][1]);
            }else{
                    res.push_back({s,e});
                    s = ans[i][0];
                    e = ans[i][1];
            }  
        }
         res.push_back({s,e});
        return res;
    }
};