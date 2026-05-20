class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort( a.begin() , a.end());
        int p =a[0][0];
        int q = a[0][1];
        vector<vector<int>>ans;
        for( int i=1;i<a.size();i++){
            if( a[i][0] <= q){
                q = max( q , a[i][1]);
            }else{
                 ans.push_back({p,q});
                  p= a[i][0];
                  q = a[i][1];
            }
        }
        ans.push_back({p,q});
        return ans;
    }
};