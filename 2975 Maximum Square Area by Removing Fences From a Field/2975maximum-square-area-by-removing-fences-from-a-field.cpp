class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& h, vector<int>& v) {
        unordered_set<int>hd;
        long long res  = -1,mod = 1e9+7;
        h.push_back(1);
        h.push_back(m);
        v.push_back(1);
        v.push_back(n);
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        for(int i=0;i<h.size();i++){
            for(int j=i+1;j<h.size();j++){
                hd.insert(h[j]-h[i]);
                // cout<<(h[j]-h[i])<<" ";
            }
        }
        // cout<<endl;
        for(int i=0;i<v.size();i++) {
            for(int j=i+1;j<v.size();j++){
                long long a = v[j]-v[i];
                // cout<<a<<" "<<res<<" ";
                if(hd.count(a)){
                    res = max(res,a);
                    res = res%mod;
                }
            }
        }
        if(res==-1) return -1;
        long long t = (res*res)%mod;
        return (int)(t);
    }
};