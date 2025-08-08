class Solution {
public:
    vector<string> topKFrequent(vector<string>& m, int k) {
       map<string , int>a;
      for( auto& i :m){
        a[i]++;
      }
      vector<pair< string , int >>b(a.begin(),a.end());
      sort( b.begin(),b.end(),[](auto& x , auto& y){
        if( x.second == y.second) return x.first < y.first;
        else return x.second  > y.second;
      });
      vector<string>res;
      for( int i=0;i<k;i++){
        res.push_back(b[i].first);
      }
      return res;
       }
    
};