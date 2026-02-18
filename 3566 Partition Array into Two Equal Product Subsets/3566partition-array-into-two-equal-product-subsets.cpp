class Solution {
public:
vector<bool>v;

   bool fun(int i , long long p,vector<int>& a, long long t)
   {
        if( p > t) return false;

        if( p==t){
            long long m =1;
            bool second = false;
            for(int j=0;j<a.size();j++){
                if( !v[j]){
                    second = true;
                    if( m > t / a[j]) return false;   
                    m*=a[j];
                }
            }
            if( second && m == t) return true;
        }

        if( i==a.size()) return false;
        if( p <= t / a[i] ){
            v[i]=true;
            if( fun( i+1,p*a[i],a,t)) return true;
            v[i]=false;
        }
        if( fun(i+1,p,a,t)) return true;
        
        return false;
   }

    bool checkEqualPartitions(vector<int>& a, long long t) {
        v.assign(a.size(),false);
        return fun( 0,1,a,t);
    }
};