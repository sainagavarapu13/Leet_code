class Solution {
public:
    int gcd(int a,int b){
        while(b){
            int t = a%b;
            a=b;
            b=t;
        }
        return a;
    }
    int maxValidSplits(vector<int>& a) {
        int n = a.size();
        int fin =0;
        for(int remove=-1;remove<n;remove++){
            int ans=0;
            vector<int>pre(n);
            vector<int>suf(n);
            for(int i = 0;i<n;i++){
                if(i==remove) continue;
                if(i==0||(remove==0&& i==1)) pre[i] = a[i];
                else{
                    int j = i-1;
                    while(j==remove) j--;
                    if(j>=0) 
                        pre[i] = gcd(pre[j],a[i]);
                    else pre[i] = a[i];
                }
            }
            for(int i=n-1;i>=0;i--){
                if(i==remove) continue;
                if(i==n-1||(remove==n-1&&i==n-2))
                    suf[i] = a[i];
                else{
                    int j=i+1;
                    while(j==remove) j++;
                    if(j<n) suf[i] = gcd(a[i],suf[j]);
                    else suf[i] = a[i];
                }
            }
            for(int i=0;i<n-1;i++){
                if(i==remove) continue;
                int j = i+1;
                while(j==remove) j++;
                if(j<n&&pre[i]==suf[j]) ans++;
            }
            fin=max(fin,ans);
        }
        return fin;
    }
};