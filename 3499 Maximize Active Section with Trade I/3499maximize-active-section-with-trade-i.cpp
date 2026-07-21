class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        vector<int>cnt;
        int z=1,o=0;
        int k=1;
        int i,totOnes=0;
        if(s[0]=='1') totOnes++;
       
        for( i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                z++;
            }
            else{
                if(s[i-1]=='0') k=-1;
                else k=1;
                cnt.push_back(k*z);
                z=1;
            }
            if(s[i]=='1') totOnes++;
        }
     if(s[i-1]=='0') k=-1;
     else k=1;
        cnt.push_back(k*z);
        int maxi=totOnes;
        int idx=-1;
        int ones=INT_MAX;
       vector<pair<int,int>> cand;  
        for(int i=1;i<cnt.size()-1;i++){
            if(cnt[i]<0) continue;
            int x = -cnt[i-1] + cnt[i] - cnt[i+1];
            cand.push_back({x,i});
        }
       for(auto& i:cand){
        maxi=max(maxi,i.first+totOnes-cnt[i.second]);
       }
        return maxi;
    }
};