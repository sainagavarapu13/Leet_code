class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& a) {
       map<int , vector<int>>m;
       for( int i=0;i<a.size();i++){
        for( int j=0;j<a[0].size();j++){
            m[i+j].push_back(a[i][j]);
        }
       }
       vector<int>ans;
       for( auto [ x,y]:m){
        if( x%2!=0){
            for(int i:y)ans.push_back(i);
        }else{
            for( int i=y.size()-1;i>=0;i--){
                ans.push_back(y[i]);
            }
        }
       }
       return ans;
    }
};