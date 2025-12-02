class Solution {
public:
    int alternatingSum(vector<int>& a) {
        int sum=0;
        for( int i=0;i<a.size();i+=2){
            sum+=a[i];
           if( i+1 < a.size()) sum-=a[i+1];
        }
        return sum;
    }
};