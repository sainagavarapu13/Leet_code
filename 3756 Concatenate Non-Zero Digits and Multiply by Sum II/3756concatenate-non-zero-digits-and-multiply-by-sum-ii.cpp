class Solution {
public:
    vector<int> sumAndMultiply(string a, vector<vector<int>>& q) {
        int mod=1e9+7;
        vector<int>s(a.size()+1,0),c(a.size()+1,0),x(a.size()+1,0);
        for(int i=0;i<a.size();i++){
            int d=a[i]-'0';
            s[i+1]=s[i]+d;
            x[i+1]=(d>0)?(x[i]*10LL+d)%mod:x[i];
            c[i+1]=c[i]+(d>0);
        }
        vector<long long>p(100001);
        p[0]=1;
        for(int i=0;i<100000;i++){
            p[i+1]=(p[i]*10)%mod;
        }
        vector<int>ans;
        for(auto i:q){
            int l=i[0];
            int r=i[1]+1;
            int len=c[r]-c[l];
            long long sum=s[r]-s[l];
            long long num=(x[r]-x[l]*p[len]%mod+mod)%mod;
            ans.push_back((int)(1LL*num*sum%mod));
        }

        return ans;
    }
};