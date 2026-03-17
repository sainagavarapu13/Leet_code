class Solution {
public:
    int maximumUnits(vector<vector<int>>& a, int t) {
        sort( a.begin(),a.end(),[](auto& x , auto& y){
            return x[1] > y[1];
        });
        int sum=0;
        for( int i=0;i<a.size();i++){
            if( t>=a[i][0]){
             sum+= a[i][0]*a[i][1];
             t = t-a[i][0];
           }else{
            sum+=t*a[i][1];
            break;
           }
        }
        return sum;
    }
};