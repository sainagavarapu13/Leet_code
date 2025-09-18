class Solution {
public:
    bool uniqueOccurrences(vector<int>& a) {
        map<int, int>b;
        for( int i:a){
            b[i]++;
        }
        vector<pair<int , int>>c(b.begin(),b.end());
        sort(c.begin(),c.end(),[](auto& x , auto& y){
            return x.second > y.second;
        });
        for( int i=1;i<c.size();i++){
            if( c[i].second == c[i-1].second) return false;
        }
        return true;
    }
};