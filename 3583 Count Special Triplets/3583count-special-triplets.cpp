class Solution {
public:
 
    int specialTriplets(vector<int>& a) {
        map<long long,long long>m;
        map<long long,long long>map;
        int z=0,mod=1000000007;
        for(auto& i:a){
            m[i]++;
            
        }
        int cnt=0;
        for(int i=0;i<a.size();i++){
            m[a[i]]--;
                if(m[2*a[i]]>=1){
                    if(map[2*a[i]]>=1){
                        cnt=(cnt+(m[2*a[i]]*map[2*a[i]])%mod)%mod;
                        cout<<i<<" "<<a[i]<<"\n";
                    }
                }
             map[a[i]]++;
        }
       
        return cnt%mod;
    }
};