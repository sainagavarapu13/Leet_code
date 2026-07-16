class Solution {
public:
    long long gcdSum(vector<int>& a) {
        vector<long long>p(a.size());
        int m = a[0];
        p[0]=gcd(a[0],m);
        for( int i=1;i<a.size();i++){
            m = max( m , a[i]);
            p[i]=__gcd(a[i],m);
        }
        sort( p.begin(),p.end());
        int i=0,j=p.size()-1;
        long long sum=0;
        while( i<j){
            sum+=__gcd(p[i],p[j]);
            i++;
            j--;
        }
            
            return sum;
    }
};