class Solution {
public:
    int xorAfterQueries(vector<int>& a, vector<vector<int>>& b) {
         int MOD = 1000000007;
        for(int i=0;i<b.size();i++){
            int idx = b[i][0];
            int limit = b[i][1];
            int k = b[i][2];
            int v = b[i][3];
            while(idx <= limit){
                a[idx] = (1LL*a[idx]*v)%MOD;
                idx+=k;
            }
        }
        int ans=0;
        for(auto& i:a){
            ans^=i;
        }
        return ans;
    }
};