class Solution {
public:
    vector<int>sev;
    void fun(){
        sev.resize(10001);
        for(int i=0;i<sev.size();i++) sev[i] = i;
        for(int i=2;i<sev.size();i++){
            if(sev[i]!=i) continue;
            for(int j=i*i;j<sev.size();j+=i){
                sev[j] = i;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& a) {
        fun();
        set<int>set;
        for(int i=0;i<a.size();i++){
            while(a[i]!=1){
                set.insert(sev[a[i]]);
                a[i]/=sev[a[i]];
            }
        }
        return set.size();
    }
};