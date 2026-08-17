class Solution {
public:
    int maximumGap(string skill, string station) {
        int n = station.size();
        vector<int> pref,suf;
        int  j = 0;
        for(int i=0;i<n;i++){
            if(j<skill.size() && station[i]==skill[j]){
                j++;
                pref.push_back(i);
            }
        }
        j = skill.size()-1;
        for(int i=n-1;i>=0;i--){
            if(j>=0 && station[i]==skill[j]){
                suf.push_back(i);
                j--;
            }
        }
        reverse(suf.begin(),suf.end());
        int res = 0;
        // cout<<pref.size()<<" "<<suf.size()<<endl;
        for(int i=suf.size()-1;i>0;i--){
            res = max(res,suf[i]-pref[i-1]);
            // cout<<suf[i]<<" "<<pref[i-1]<<endl;
        }
        return res;
    }
};