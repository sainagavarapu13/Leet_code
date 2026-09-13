class Solution {
public:
    long long shadowPairs(vector<int>& a) {
        int n = a.size();
        vector<int> b(n,n),s,d(n,n),c(n,0);
        long long res = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            while(!s.empty() && a[s.back()]>a[i]){
                b[s.back()] = i;
                s.pop_back();
            }
            s.push_back(i);
        }
        for(int i=n-1;i>=0;i--){
            if(m.count(a[i])){
                d[i] = m[a[i]];
            }
            m[a[i]] = i;
        }
        for(int i=n-1;i>=0;i--){
            if(d[i]<b[i]) c[i] = 1+c[d[i]];
            res += (b[i]-i-c[i]-1);
        }
        return res;
    }
};