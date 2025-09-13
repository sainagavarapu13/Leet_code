class Solution {
public:
    int minArrivalsToDiscard(vector<int>& a, int w, int m) {
        map<int,int>mp;
        int i,cnt=0;
        vector<int>keep(a.size(),0);
        for(i=0;i<a.size();i++){
            if(mp[a[i]]==m){
                cnt++;
                keep[i]=0;
            }
            else {
                mp[a[i]]++;
                 keep[i]=1;
                 }
            if(i-w+1>=0){
                if(keep[i-w+1]){
                    mp[a[i-w+1]]--;
                }
            }
        }
        return cnt;
    }
};