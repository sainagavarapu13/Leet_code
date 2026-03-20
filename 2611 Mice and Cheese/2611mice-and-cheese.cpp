class Solution {
public:
    int miceAndCheese(vector<int>& a, vector<int>& b, int k) {
        vector<pair<int , pair<int , int>>>p;
        for( int i=0;i<a.size();i++){
            p.push_back({(a[i]-b[i]),{a[i],b[i]}});
            
        }
        sort( p.rbegin() , p.rend());
        int ans=0;
        for( int i=0;i<k;i++){
            ans+=p[i].second.first;
        }
         for( int i=k;i<p.size();i++){
            ans+=p[i].second.second;
        }
        return ans;
    }
};