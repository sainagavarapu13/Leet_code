class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        
        vector<pair<int , int>>b;
        for( int i=0;i<a.size();i++){
           b.push_back( {abs( a[i]-x),a[i]});
        }
        sort(b.begin(),b.end());
        vector<int>res;
        int i=0;
        for( auto& [x,y]:b){
            if( i >k-1) break;
            else {res.push_back(y);
            i++;}
        }
        sort( res.begin(),res.end());
        return res;
    }
};