class Solution {
public:
    int minOperations(vector<int>& a) {
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