class Solution {
public:
    int numOfUnplacedFruits(vector<int>& f, vector<int>& b) {
        int plced =0;
        vector<pair<int,int>>a;
        for(int i : b){
            a.push_back({i,1});
        }
        for( int i=0; i < f.size(); i++){
            int j =0;
            while( j<a.size() ){
                if( f[i]<=a[j].first &&a[j].second ==1){
                     plced++;
                    a[j].second =0;
                    break;
                }
                else j++;
            }
           
             }
        
        return f.size()-plced;
    }
};