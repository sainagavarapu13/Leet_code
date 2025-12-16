class Solution {
public:
    long long maxAlternatingSum(vector<int>& a) {
        for( int i=0;i<a.size();i++){
            a[i]=a[i]*a[i];
        }
        sort(a.begin(),a.end());
        int s = 0;
        int e =( a.size()/2);
        long long sum=0;
        for( int  i=e;i<a.size();i++){
            sum+=a[i];
        }
        for( int  i=s;i<a.size()/2;i++){
            sum-=a[i];
        }
        return sum;
    }
};