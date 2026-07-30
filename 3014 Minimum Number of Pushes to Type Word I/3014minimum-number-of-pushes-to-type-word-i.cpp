class Solution {
public:
    int minimumPushes(string a) {
        int cnt=1;
        int ans=0;
        for(int i=0;i<a.size();i++){
            ans+=cnt;
            if((i+1)%8==0){
                cnt++;
            }
            //cout<<ans<<" ";
        }
        return ans;
    }
};