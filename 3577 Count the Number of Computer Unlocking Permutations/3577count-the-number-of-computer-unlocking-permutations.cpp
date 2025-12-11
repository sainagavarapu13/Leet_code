class Solution {
public:
    int fac(int n){
        long long p=1;
        for(int i=1;i<=n;i++) {
            p=((long long)p*(long long)i)%(1000000007);
        };
        return p%(1000000007);
    }
    int countPermutations(vector<int>& a) {
        int m=INT_MAX;
        for(auto& i:a){
            m=min(m,i);
        }
        int cnt=0;
        for(auto& i:a){
            if(i==m) cnt++;
        }
        int n=a.size()-1;
        if(cnt>1) return 0;
        
        if(a[0]!=m) return 0;
        
        int k=fac(n);
       
        return k%(1000000007);
    }
};