class Solution {
public:
    int lengthLongestPath(string a) {
        vector<int>dp(10000,0);
        int n = a.size();
        int i=0;
        int ans=0;
        while( i<n){
            int cnt_ts=0;
            while( i<n && a[i]=='\t'){
                cnt_ts++;
                i++;
            }
            int dep_start=i;
            int isfile=0;
            while( i<n && a[i]!='\n'){
                if( a[i]=='.'){ isfile =1;
                }
                i++;
            }
            int size = i-dep_start;
            if(cnt_ts ==0) dp[cnt_ts] =size;
            else{
                dp[cnt_ts] = dp[cnt_ts-1]+size+1;
            }
            if( isfile){
                ans = max( ans,dp[cnt_ts]);
            }
            i++;

        }
        return ans;
    }
};