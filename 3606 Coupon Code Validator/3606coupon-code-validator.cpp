class Solution {
public:
     bool check( char a){
         bool flage = 0;
         if( a >='a' && a<='z' ) flage =1;
         else if( a >='A' && a<='Z' ) flage =1;
          else if( a >='0' && a<='9' ) flage =1;
         else if( a =='_' ) flage =1;
         return flage;

     }
    vector<string> validateCoupons(vector<string>& a, vector<string>& b, vector<bool>& c) {
        vector< pair< string , string >>d;
        set<string> ch ={"grocery","pharmacy","restaurant","electronics"};
        for( int i = 0;i < a.size();i++){
            bool flage = 1;
            for( int j =0;j<a[i].size();j++){
                if(!check( a[i][j])){
                    flage = 0;
                    break;
                }
            }
            if( flage ==0) continue;
            if( flage && c[i]  &&  ch.count(b[i]) && a[i]!=""){
                d.push_back({a[i],b[i]});
            }
        }
        sort( d.begin(),d.end(),[](auto& x , auto& y){
            if( x.second == y.second){
                return x.first < y.first;
            }
            else return x.second < y.second;
        });
        vector<string>res;
        for( auto[x,y]:d){
            res.push_back(x);
        }
        return res;
    }
};