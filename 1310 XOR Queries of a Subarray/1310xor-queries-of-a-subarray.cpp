class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& q) {
        vector<int>pre,ans;
        int x = 0;
        for(int i=0;i<a.size();i++){
            x^=a[i];
            pre.push_back(x);
        }
        for(int i=0;i<q.size();i++){
            int l = q[i][0];
            int r = q[i][1];
            if(l==0){
                ans.push_back(pre[r]);
            }
            else ans.push_back(pre[r]^pre[l-1]);
        }
        return ans;
    }
};