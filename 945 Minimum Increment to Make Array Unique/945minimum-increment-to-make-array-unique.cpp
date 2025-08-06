class Solution {
public:
    int minIncrementForUnique(vector<int>& a) {
        sort( a.begin(),a.end());
        int sum=0;
        for( int i=0;i<a.size()-1;i++){
            int diff = abs( a[i]-a[i+1])+1;
            if( a[i]>=a[i+1]){
                sum+=diff;
                a[i+1]+=diff;
            }
        }
        return sum;

        
    }
};