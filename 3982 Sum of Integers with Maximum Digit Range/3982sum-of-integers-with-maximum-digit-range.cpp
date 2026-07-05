class Solution {
public:
    int maxDigitRange(vector<int>& a) {
        int maxi=0;
        vector<pair<int,int>>m;
        for(int i=0;i<a.size();i++){
            int k=a[i];
            int d_maxi=0,d_mini=9;
            int sum=0;
            if(k==0){
                d_mini=0;
                d_maxi=0;
            }
            while(k){
                d_maxi=max(d_maxi,(k%10));
                 d_mini=min(d_mini,(k%10));
                k/=10;
            }
            sum=d_maxi-d_mini;
           m.push_back({a[i],sum});
            maxi=max(maxi,sum);
        }
        int ans=0;
        for(auto& [n,c]:m){
            if(c==maxi){
                ans+=n;
            }
        }
        return ans;
    }
};