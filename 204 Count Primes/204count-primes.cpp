class Solution {
public:
    vector<bool>seive;
    int se=-1;
    void set(int n){
           if(n <= 2) return ;
        if(se==1)return;
        seive.resize(n,true);
       // cout<<"hello\n";
        seive[0] = false;
        seive[1] = false;
        for(int i = 4;i<n;i+=2){
            seive[i] = false;
        }
        for(long long i=3;1LL*i*i<=n;i++){
            if(seive[i]==false) continue;
            for(long long j=1LL*i*i;j<n;j+=2*i){
                seive[j] = false;
            }
        }
        se=1;
    }
    int countPrimes(int n) {
        set(n);
        int cnt =0;
        if(n<=2) return 0;
        for(int i=0;i<n;i++){
            if(seive[i]) cnt++;
        }
        return cnt;

    }
};