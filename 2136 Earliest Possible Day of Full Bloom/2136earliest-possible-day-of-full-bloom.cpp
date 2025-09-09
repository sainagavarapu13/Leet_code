class Solution {
public:
    int earliestFullBloom(vector<int>& a, vector<int>& b) {
        vector<pair<int , int>>c;
        for( int i=0;i<a.size();i++){
            c.push_back({a[i],b[i]});
        }
        sort(c.begin(),c.end(),[](auto& x , auto& y){
            return x.second >y.second;
        });
        int cur=-1;
        int m =INT_MIN;
        for( auto& [x,y] : c){
            cur+=x;
            m = max( m , cur+y+1);
        }
     return m;   
    }
};