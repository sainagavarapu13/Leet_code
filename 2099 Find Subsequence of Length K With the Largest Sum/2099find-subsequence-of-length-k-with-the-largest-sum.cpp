class Solution {
public:
    vector<int> maxSubsequence(vector<int>& a, int k) {
        if( a.size()==k) return a;
        vector<pair<int,int>> b;
        for( int i=0;i<a.size();i++) b.push_back({a[i],i});
        sort(b.begin(),b.end(),[](auto& x,auto& y){
            return x.first > y.first;
        });
         sort(b.begin(),b.begin()+k,[](auto& x,auto& y){
            return x.second < y.second;
        });
        vector<int> res;
        for( int i=0;i<k;i++){
            res.push_back(b[i].first);
        }
        return res;
    }
};