class Solution {
public:
long long mod = 1000000007;
    inline long long fun(long long n){
        return (n*(n-1)/2)%mod;
    }
    int countTrapezoids(vector<vector<int>>& a) {
        
        
        const long long inv2 = 500000004;
        map<int,int>m;
        for( auto i : a){
            m[i[1]]++;
        }
        vector<long long>s;
        long long sum=0;
        for( auto[x,y] : m){
            s.push_back(fun(y)%mod);
            sum=(sum+fun(y))%mod;
        }
        long long ans=0;
        for( int i : s){
            ans+= (( sum - i)*i)%mod;
        }
        ans = ( ans*inv2)%mod;
        return ans%mod;
    }
};