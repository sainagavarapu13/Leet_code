class Solution {
public:
    vector<int>s;
    void solve(){
       s.resize(1000000, 0);
        for( int i=0;i<1e6;i++){
            s[i]=i;
        }
        for( int i=2;i*i<=1e6;i++){
            if( s[i]==i){
                for( int j =i*i;j<1e6;j+=i){
                    s[j]=i;
                }
            }
        }
    }
    int distinctPrimeFactors(vector<int>& n) {
        solve();
        unordered_map<int, int>m;
        for( int i : n){
            int x =i;
            while(x!=1){
                m[s[x]]++;
                x/=s[x];
            }
        }
        return m.size();

    }
};