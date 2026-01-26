class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& a) {
        vector<vector<int>> b;
        sort( a.begin(),a.end());
        int m= INT_MAX;
        for( int i=1;i<a.size();i++){
                m = min( m , a[i]-a[i-1]);
        }
        for( int i=1;i<a.size();i++){
            if(a[i]-a[i-1] == m){
                b.push_back({a[i-1],a[i]});
            }
        }
        return b;
    }
};