class Solution {
public:
    vector<int>s;
    bool sie = false;
    void fun(){
        if( sie) return ;
        s.resize(1e5+1);
        for( int i =0;i<=1e5;i++) s[i]=i;
        for( int i=2;i*i<=(1e5+1);i++){
            if( s[i]==i){
                for( int j =i*i; j<=1e5;j+=i){
                    if( s[j]==j) s[j]=i;
                }
            }
        }
        sie = true;
    }
    int longestSubarray(vector<int>& a, int k) {
        fun();
        vector<vector<int>>f(a.size());
int i=0;
        for( int x :a){
           // set<int>fac;
            while( x>1){
                f[i].push_back(s[x]);
               int p= s[x];
                while( x%p ==0) x/=p;
            }
            i++;
            //f[i].push_back({fac.begin(), fac.end()});
        }
        unordered_map<int, int>m;
        int l=0, ans =0, d=0;
        for( int r =0; r<a.size();r++){
            for( int i : f[r]){
                if( m[i]==0) {d++;
                }
                 m[i]++;
            }
            while(d>k){
                for( int p : f[l]){
                    m[p]--;
                    if( m[p]==0) d--;
                }
                l++;
            }
            ans = max( ans, r-l+1);
        }
        return ans;
        
    }
};